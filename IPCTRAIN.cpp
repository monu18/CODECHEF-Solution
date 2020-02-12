#include<bits/stdc++.h>

using namespace std;
#define ll long long
int main(){int t;
cin>>t;
int n,d;
while(t--)
	{int di,ti,si;
		cin>>n>>d;
		std::vector<pair<pair<ll,ll>,ll>> v(n);
		for(ll i=0;i<n;i++){

			cin>>di>>ti>>si;
			v[i].first.first=di;
			v[i].first.second=ti;
			v[i].second=si;
		}
		sort(v.begin(),v.end());

		ll index=0;
		priority_queue<pair<ll,ll>> pq;
		pair<ll,ll> temp;
		for(ll i=1;i<=d;i++)
		{
			while(index<n && v[index].first.first<=i)
			{
				pq.push({v[index].second,v[index].first.second});
				index++;
			}
            if(!pq.empty())
            {
			    temp=pq.top();
			    pq.pop();
			    temp.second-=1;
			    if(temp.second>0)
			    {
				    pq.push(temp);
			    }
            }

		}
		ll ans=0;
		while(pq.size()!=0)
		{
			temp=pq.top();
			pq.pop();
			ans+=temp.first*temp.second;
		}
		cout<<ans<<endl;
	}
}

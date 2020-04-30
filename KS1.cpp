//mOzis_
/////*31022618*/////
//****//MONU KUMAR\****//
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long
#define p1(x) cout <<x
#define p2(x,y) cout <<x <<" " <<y
#define p3(x,y,z) cout <<x <<" " <<y <<" " <<z
#define nL cout<<"\n"
#define lp(i,l,r) for (long long int i = l; i < r; i++)
#define mem(a,x) memset(a,x,sizeof(a))              //set elements of array to some value
#define pi 3.1415926535897932384626
#define mod 1000000007
#define pb(x) push_back(x)
#define ff first
#define ss second
#define siz 256                        //characters are stored using 8 bit and there can be
bool anagram(char *s1, char *s2)     //256 possible characters only in lowercase alphabet
{
	ll count[siz];
    mem(count,0) ;
    ll i;
    for (i = 0; s1[i] && s2[i];  i++)
    {
        count[s1[i]]++;
        count[s2[i]]--;
    }
    if (s1[i] || s2[i])
    {
      return false;
    }
    lp(i,0,siz)
    {
    	 if (count[i])
    	 {
    	 	 return false;
    	 }
    }
     return true;

}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	ll t;
	cin>>t;
	clock_t launch=clock();
	while(t--)
	{
		ll n;
		cin>>n;
		ll a[n],sum[n]={0},sum_xor[n]={-1};
		lp(i,0,n)
		{
			cin>>a[i];

		}
		sum[0]=a[0];
		lp(i,1,n)
		{
			sum[i]+=(sum[i-1]+a[i]);

		}
		sum_xor[0]=sum[0];
		ll aa[n+1];
		aa[0]=0;
		aa[1]=sum[0];
		//sum_xor[1]=sum[0];
/*		std::vector<pair<ll,ll> > v;
		v.push_back( make_pair(0,sum_xor[0]) );*/
		lp(i,1,n)
		{
			sum_xor[i]=(sum_xor[i-1]^a[i]);
			aa[i+1]=sum_xor[i];
			//v.push_back( make_pair(i,sum_xor[i]) );
		}
		unordered_map<ll, vector<ll> > mp;
		//multimap <ll, ll> :: iterator itr;
		lp(i,0,n+1)
		{
			mp[aa[i]].push_back(i);

		}
		for (auto it =mp.begin(); it!=mp.end();it++)
    {
        cout  <<  '\t' << it->first <<  '\t' << it->second.size() << '\n';
    }
   // cout<<mp.find(2)<<"\n";

		/*lp(i,0,n)
		{
			p1(v[i].first)<<" ";
		}
		nL;
		lp(i,0,n)
		{
			p1(v[i].second)<<" ";
		}*/

	}

	clog<<((long double)(clock()-launch)/CLOCKS_PER_SEC)<<"\n";
	return 0;
}
//////////*********************end of program*********************//////////

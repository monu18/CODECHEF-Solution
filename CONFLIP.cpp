//mOzis_
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	ll t;
	cin>>t;
	while(t--)
	{
		ll g;
		cin>>g;
		while(g--)
		{
			ll i,n,q,r,s;
			cin>>i>>n>>q;
			s=n/2;
			r=n/2;
			if (i==1 && q==1)
			{
				cout<<s<<"\n";
			}
			else if (i==1 && q==2)
			{
				cout<<n-s<<"\n";
			}
			else if (i==2 && q==2)
			{
				cout<<r<<"\n";
			}
			else
			{
				cout<<n-r<<"\n";
			}
		}
	}

	return 0;
}

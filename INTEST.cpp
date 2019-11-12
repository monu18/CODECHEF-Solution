//mOzis_
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	ll n,k,count=0;
	cin>>n>>k;
	ll a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	for (int i = 0; i < n; ++i)
	{
		if (a[i]%k==0)
		{
			count++;
		}
	}
	cout<<count<<"\n";

	return 0;
}

#include <bits/stdc++.h>
#define ll  long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,cnt=0;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++)
        {
       		cin>>a[i];
       	}
        sort(a,a+n);
        for(ll i=0;i<n;i++)
        {
          if(a[i]<=cnt)
          {
          	cnt++;
          }
        }
        cout<<cnt<<endl;

    }
    
    return 0;
}

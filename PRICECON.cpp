#include<bits/stdc++.h>
using namespace std;
#define ll  int
int main(int argc, char const *argv[]) {
  ll t;
  cin>>t;
  while(t--)
  {
    ll n,k;
    cin>>n>>k;
    ll a[n];
    ll ans=0;
    for (ll i = 0; i < n; i++) {
      cin>>a[i];
      ans+=(max(0,a[i]-k));
    }
    cout<<ans<<"\n";
  }
  return 0;
}

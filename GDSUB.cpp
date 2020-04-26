#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
ll power(ll x, ll y, ll p)
{
    ll res = 1;

    x = x % p;

    while (y > 0)
    {

        if (y & 1)
            res = (res*x) % p;


        y = y>>1;
        x = (x*x) % p;
    }
    return res;
}

ll modInverse(ll n, ll p)
{
    return power(n, p-2, p);
}
ll nCrModPFermat(ll n, ll r, ll p)
{

   if (r==0)
      return 1;


    ll fac[n+1];
    fac[0] = 1;
    for (int i=1 ; i<=n; i++)
        fac[i] = fac[i-1]*i%p;

    return (fac[n]* modInverse(fac[r], p) % p *
            modInverse(fac[n-r], p) % p) % p;
}
int main(int argc, char const *argv[]) {
  ll n,k;
  cin>>n>>k;
  ll a[n];
  for (size_t i = 0; i < n; i++) {
    /* code */
    cin>>a[i];
  }
  ll ans=0;
  for (size_t i = 1; i <= k; i++) {
    /* code */
    ans+=nCrModPFermat(n,i,mod);
    ans%=mod;
  }
  cout<<(ans+1)%mod<<"\n";
  return 0;
}

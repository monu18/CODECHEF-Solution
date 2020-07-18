#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(int argc, char const *argv[]) {
  ll t;
  cin>>t;
  while(t--)
  {
    ll n;
    cin>>n;
    while(n%2==0)
    {
      n/=2;
    }
    cout<<(n/2)<<"\n";
  }
  return 0;
}

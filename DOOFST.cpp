#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(int argc, char const *argv[]) {
  ll n,m;
  cin>>n>>m;
  for (size_t i = 0; i < m; i++) {
    /* code */
    ll a,b;
    cin>>a>>b;
  }
  if (m*n>1000000) {
    /* code */
    cout<<-1<<"\n";
  }
  else
  {


    cout<<(n-1)<<"\n";
    ll vv=n-1;
    ll cc=1;
    while(vv--)
    {
      for (size_t i = 0; i < n-cc; i++) {
        /* code */
        cout<<0;
      }
      for (size_t i = 0; i < cc; i++) {
        /* code */
        cout<<1;
      }

      cc++;
      cout<<"\n";
    }
}
  return 0;
}

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(int argc, char const *argv[]) {
  ll t;
  cin>>t;
  while(t--)
  {
    ll n;
    cin>>n;
    ll a[n];
    ll five=0;
    ll ten=0;
    for (ll i = 0; i < n; i++) {
      cin>>a[i];
    }
    bool flag=false;
    for (ll i = 0; i < n; i++) {
      if (a[i]==5) {

        five++;
      }
      else if (a[i]==10) {

        ten++;
        five--;
      }
      else
      {
        if (ten>0) {
          /* code */
          ten--;
        }
        else
        {
          five-=2;
        }
      }
      if (five<0 || ten<0) {
        /* code */
        cout<<"NO\n";
        flag=true;
        break;
      }
    }
    if (!flag) {
      /* code */
      cout<<"YES\n";
    }
  }
  return 0;
}

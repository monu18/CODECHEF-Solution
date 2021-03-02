#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(int argc, char const *argv[]) {
  ll t;
  std::cin >> t;
  while(t--)
  {
    ll n,p;
    cin>>n>>p;
    cout<<1<<" "<<1<<" "<<1<<" "<<1<<" "<<1<<endl;
    ll temp;
    cin>>temp;
    cout<<2<<endl;
    for (ll i = 0; i < n; i++) {
      /* code */
      for (ll j = 0; j < n; j++) {
        /* code */
        if (temp>0) {
          /* code */
          cout<<1<<" ";
          temp--;
        }
        else
        {
          cout<<0<<" ";
        }

      }
      cout<<endl;
    }
    ll verdict;
    std::cin >> verdict;

  }
  return 0;
}

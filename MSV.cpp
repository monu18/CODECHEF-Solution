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


    ll b[100001]={0};
    std::vector<ll> v;
    ll ev=0;
    ll maxx=0;
    for (ll i = 0; i < n; i++) {
      /* code */
      cin>>a[i];
      b[a[i]]++;
      maxx=max(maxx,a[i]);
      if (a[i]%2==0) {
        /* code */
        ev++;
      }
      if (a[i]==1) {
        /* code */
        v.push_back(i);
        continue;
      }
      if (a[i]==2) {
        /* code */
        v.push_back(ev-1);
        continue;
      }
      ll count=0;
      for (size_t j = a[i]; j <= maxx; j+=a[i]) {
        /* code */
        if (b[j]>0) {
          /* code */
          count+=b[j];
          //cout<<"count "<<count<<" ";
        }

      }
      //cout<<"\n";
      v.push_back(count-1);

    }
    ll maax=0;
    for (size_t i = 0; i<v.size() ; i++) {
      /* code */
      maax=max(maax,v[i]);
    }
    cout<<maax<<"\n";

  }
  return 0;
}

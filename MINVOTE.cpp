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
    ll b[n]={0};

    std::vector<pair<ll,ll> > v;
    for (size_t i = 0; i < n; i++) {
      /* code */
      cin>>a[i];
      v.push_back(make_pair(a[i],i));
    }
    sort(v.begin(),v.end());
    ll temp=0;
    for (size_t i = 0; i < v.size(); i++) {
      /* code */
      temp+=v[i].first;
      b[i]=temp;

    }
  }
  return 0;
}

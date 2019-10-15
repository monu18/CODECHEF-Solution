#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(int argc, char const *argv[]) {
  ll t;
  cin>>t;
  while(t--)
  {
    string s;
    cin>>s;
    ll e=0,o=0;
    for (size_t i = 0; i < s.length(); i++) {
      /* code */
      if (s[i]=='0') {
        /* code */
        e++;
      }
      else
      {
        o++;
      }
    }
    if (e==1 || o==1) {
      /* code */
      cout<<"YES"<<"\n";
    }
    else
    {
      cout<<"NO"<<"\n";
    }
  }
  return 0;
}

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
    int a[26]={0};
    for (size_t i = 0; i < s.length(); i++) {
      /* code */
      a[s[i]-'A']++;
    }
    int count=0;
    for (size_t i = 0; i < 26; i++) {
      /* code */
      if (a[i]>0) {
        /* code */
        count++;
      }
    }
    if (count==2) {
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

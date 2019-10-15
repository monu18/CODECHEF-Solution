#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll remove(string s,ll start, ll end)
{
  if (start>=end) {
    /* code */
    return 0;
  }
  if (s[start]==s[end]) {
    /* code */
    return remove(s,start+1,end-1);
  }
  return 1+ min(remove(s,start+1,end),remove(s,start,end-1));
}
int main(int argc, char const *argv[]) {
  string s;
  cin>>s;
  cout<<remove(s,0,s.length()-1);
  return 0;
}

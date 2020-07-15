#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(int argc, char const *argv[]) {
  ll n;
  cin>>n;
  ll start1=1,start2=1;
  ll end1=n,end2=n;
  ll mid1,mid2;
  for (ll i = 0; i < 301; i++) {

    if (i%2==0) {
      mid1=start1+(end1-start1)/2;
      cout<<mid1<<endl;
      char temp1;
      cin>>temp1;
      if (temp1=='G') {
        start1=mid1+1;
      }
      else if (temp1=='L') {
        end1=mid1-1;
      }
      else
      {
        break;
      }
    }
    else
    {
      mid2=start2+(end2-start2)/2;
      cout<<mid2<<endl;
      char temp2;
      cin>>temp2;
      if (temp2=='G') {
        start2=mid2+1;
      }
      else if (temp2=='L') {
        end2=mid2-1;
      }
      else
      {
        break;
      }
    }
  }
  return 0;
}

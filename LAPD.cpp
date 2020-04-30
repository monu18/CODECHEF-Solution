#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
int main(int argc, char const *argv[]) {

  double a,b,c;
  cin>>a>>b>>c;
  ll ans=0;
  double vb=b;
  double va=a;
  double vc=c;
  while(vb-- >0)
  {
    while(va-- >1)
    {
      if (va<=vb) {
        if (c>(vb*vb)/(va-1)+1) {
          /* code */
          ans+=;
        }
        else
        {
          break;
        }
      }
      else
      {
        if (c>(vb*vb)/(va-1)
      ) {
          /* code */
          ans+=(c-ceil((vb*vb)/(va-1)));
          if (a>=c) {
            /* code */
            ans+=1;
          }
        }
        else
        {
          break;
        }
      }
    }

  }
  return 0;
}

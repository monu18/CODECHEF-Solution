#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(int argc, char const *argv[]) {
  ll t;
  cin >>t;
  ll maxx=0;
  ll ind=0;
  ll diff;
  ll a=0,b=0;
  while(t--)
  {
    ll x,y;
    cin>>x>>y;
    a+=x;b+=y;
     diff=abs(a-b);

     if (maxx<diff) {
       /* code */
       maxx=diff;
       if (a>b) {
         /* code */
         ind=1;
       }
       else
       {
         ind=2;
       }
       //ind=i;
     }

  }
  cout<<ind<<" "<<maxx;
  return 0;
}

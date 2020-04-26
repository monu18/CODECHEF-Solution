#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(int argc, char const *argv[]) {
  ll n,m;
  cin>>n>>m;
  for (size_t i = 0; i < m; i++) {
    ll a,b;
    cin>>a>>b;
  }
  if (n==1) {
    /* code */
    cout<<-1<<"\n";
    return 0;
  }

  bool flag=true;
  ll vv=n;
  ll vvv=n;
  ll ans=(int)log2(n);
  while(vv>0)
  {
    if (vv%2==1 && vv!=1) {
      flag=false;
      break;
    }
    vv/=2;
  }
  if (flag==false) {

    ans+=1;
  }
  if (ans*n>1000000) {

    cout<<-1<<"\n";
    return 0;
  }
  cout<<ans<<"\n";
  if (!flag) {
    /* code */
    ans--;
  }

  while (ans-- )
  {
      bool check=true;
      ll vvvv=vvv;
      vvv/=2;
      ll count1=0,count2=0;
      for (size_t i = 0; i < n; i++)
      {
        if (check) {
          if (count1<vvv) {
            cout<<0;
            count1++;
          }
          else
          {
            cout<<1;
            check=false;
            count2++;
            count1=0;
          }
        }
        else
        {
          if (count2<(vvvv-vvv)) {
            cout<<1;
            count2++;
          }
          else
          {
            cout<<0;
            check=true;
            count1++;
            count2=0;
          }
        }
        //
      }

      cout<<"\n";
  }



  return 0;
}

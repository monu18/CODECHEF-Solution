#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
int main(int argc, char const *argv[]) {
  ll n,m;
  cin>>n>>m;



  for (size_t i = 0; i < m; i++) {
    /* code */
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
  ll ans=(int)log2(n);
  vector<ll> v1;
  while(vv>0)
  {
    if (vv%2==1 && vv!=1) {
      flag=false;
      break;
    }
    vv/=2;
  }
  if (flag==false) {
    /* code */
    ans+=1;

  }
  if (ans*n>1000000) {
    /* code */
    cout<<-1<<"\n";
    return 0;
  }
  if (n==2) {
    /* code */
    cout<<1<<"\n";
    cout<<10<<"\n";
    return 0;
  }
  if (n==4) {
    /* code */
    cout<<2<<"\n";

  }
  cout<<ans<<"\n";

  queue<ll> q;
  q.push(n);
  //q.push(-1);
  //cout<<ans<<"%"<<q.size();
  vector<ll> v;
  ll mm=0;
  //if(flag==true) mm=n+1;
  //cout<<mm<<"&"<<n;
//  cout<<ans<<"%";
v.pb(n);
  while(q.size()!=n)
  {
    //cout<<"t";
    ll p=q.front();
    //cout<<p<<" ";
    q.pop();
   //  v.pb(p);
    if(p==1)
    {

    //  if(q.size()==n) break;
      continue;
    }

    ll m=p/2;
    q.push(m);
    v.pb(m);
    q.push(p-m);
    v.pb(p-m);
    //cout<<q.size()<<" ";
  }
  ll ct=0,c=0;
  for(ll i=0;i<v.size();i++) cout<<v[i]<<" ";
  cout<<'\n';
  for(ll i=1;i<=v.size();i++)
  {
    if(i%2==1)
    {
      for(ll j=0;j<v[i];j++)
      {
        cout<<"0";
        if(c>=n*(ans-2))
        v1.pb(0);
        ct++;
        c++;
      }
    }
    else
    {
      for(ll j=0;j<v[i];j++)
      {
        cout<<"1";
        if(c>=n*(ans-2))
        v1.pb(1);
        ct++;
        c++;
      }
    }
    if(ct==n)
    {
      cout<<endl;
      ct=0;
    }
  }
  for(ll i=0;i<v1.size();i++)
  {
    if(i==v1.size()-1)
    cout<<v1[i];
    else if(v1[i]==1&&v1[i+1]==1)
    cout<<0;
    else
    cout<<v1[i];
  }
  cout<<"\n";

  return 0;
}

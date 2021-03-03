/////*31022618*/////
//_MONU KUMAR

#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>
#include<unordered_map>
#include<unordered_set>
#include<map>
#include<bitset>
#include<cstring>
#include<stack>
#include<queue>
#include<set>
#include<chrono>
#include<list>
#include<climits>
#include<iomanip>
//#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define tc ll t=1; cin>>t; while(t--)
#define ll long long int
#define ld long double
#define ull unsigned long long
#define pll pair<ll,ll>
#define vll std::vector<ll>
#define vpll vector<pll>
#define mll std::map<ll,ll>
#define mpll std:map<pll,ll>
#define p1(x) cout <<x<<"\n";
#define p2(x,y) cout <<x<<" "<<y<<"\n";
#define p3(x,y,z) cout <<x<<" "<<y<<" "<<z<<"\n";
#define p4(x,y,z,w) cout <<x<<" "<<y<<" "<<z<<" "<<w<<"\n";
#define trace(x) cout<<#x<<": "<<x<<" "<<"\n";
#define trace2(x,y) cout<<#x<<": "<<x<<" | "<<#y<<": "<<y<<"\n";
#define trace3(x,y,z) cout<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<"\n";
#define trace4(a,b,c,d) cout<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<"\n";
#define nL cout<<"\n";
#define lp(i,l,r) for (long long int i = l; i < r; i++)
#define cf(i,s,e) for(long long int i=s;i<=e;i++)
#define lpr(i,r,l) for (long long int i = r-1; i >=l ; i--)
#define mem(a,x) memset(a,x,sizeof(a))            //set elements of array to some value
#define pi 3.1415926535897932384626
#define mod 1000000007
#define big 1e18
#define small -big
#define mp(a, b) make_pair(a, b)
#define pb(x) push_back(x)
#define ff first
#define ss second
#define siz 256
#define leadzero(a) __builtin_clz(a)        // count leading zeroes
#define trailzero(a) __builtin_ctz(a)       // count trailing zeroes
#define bitcount(a) __builtin_popcount(a)   // count set bits
#define all(v) v.begin(),v.end()
#define lps(v,x) (lower_bound(all(v),x)-v.begin())
#define ups(v,x) (upper_bound(all(v),x)-v.begin())
#define ina(a,n) ll a[n]; lp(i,0,n) cin>>a[i];
#define ona(a,n) lp(i,0,n) cout<<a[i]<<" ";
//#########################################################################################
bool anagram(char *s1, char *s2)
{
  ll count[siz];
    mem(count,0) ;
    ll i;
    for (i = 0; s1[i] && s2[i];  i++)
    {
        count[s1[i]]++;
        count[s2[i]]--;
    }
    if (s1[i] || s2[i])
    {
      return false;
    }
    lp(i,0,siz)
    {
       if (count[i])
       {
          return false;
       }
    }
     return true;

}
//###########################################################################################
// modulo Multiplication
ll moduloMultiplication(ll  a, ll  b,  ll  zz)
{
    ll res = 0;
    a %= mod;
    while (b)
    {
        if (b & 1)
            res = (res + a) % zz;

        a = (2 * a) % zz;

        b >>= 1;
    }
    return res;
}
//###########################################################################################

ll convert(string s)
{
    bool o = true ;
    ll ans = 0 ;
    for(ll i=0;i<s.length();i++)
    {
        ans = ans*10 + (s[i]-48) ;
    }
    return ans ;
}
//###########################################################################################
//function to calculate a^b under mod...
ll powmod(ll a,ll b, ll modulo)
{
    if(b==0 || a==1) return 1;
    ll half=powmod(a,(b/2),modulo) % modulo;
    ll full = (half*half)%modulo;

    if(b%2) return (full*a)%modulo;
    return full%modulo;
}
//###########################################################################################
//function to calculate inverse modulo under mod...assuming gcd is 1
ll invmod(ll a,ll modulo)
{
    ll check=powmod(a,modulo-2,modulo) %modulo;
    return check;
}
//###########################################################################################

ll max(ll a,ll b)
{
  if (a>b) {
    /* code */
    return a;
  }
  return b;
}
//###########################################################################################
ll min(ll a,ll b)
{
  if (a<b) {
    /* code */
    return a;
  }
  return b;
}
//###########################################################################################
ll minn(ll a,ll b, ll c)
{
  if (a<b) {
    /* code */
    return min(a,c);
  }
  else
  {
      return min(b,c);
  }

}
//###########################################################################################
ll maxx(ll a,ll b, ll c)
{
  if (a<b) {
    /* code */
    return max(b,c);
  }
  else
  {
      return max(a,c);
  }

}
//###########################################################################################
ll min(ll a,int b)
{
  if (a<b) return a;
  return b;
}
//###########################################################################################
ll min(int a,ll b)
{
  if (a<b) return a;
  return b;
}
//###########################################################################################
ll max(ll a,int b)
{
  if (a>b) return a;
  return b;
}
//###########################################################################################
ll max(int a,ll b)
{
  if (a>b) return a;
  return b;
}
//###########################################################################################
ll gcd(ll a,ll b)
{
  if (b==0) return a;
  return gcd(b,a%b);
}
//###########################################################################################
ll lcm(ll a,ll b)
{
  return a/gcd(a,b)*b;
}
//###########################################################################################
void yes()
{
  cout<<"YES"<<"\n";
}
//###########################################################################################
void no()
{
  cout<<"NO"<<"\n";
}
//###########################################################################################
ll dp[4015][4015];
ll pref[4015];

ll dega2(ll idx,ll taken,ll n,ll k,vll &arr){
    if(taken>=k && (pref[idx]-taken>=k)) return 0;
    else if(idx>=n)  return 1e10;
    else if(dp[idx][taken]!=-1) return dp[idx][taken];
    // check

    ll c1 = dega2(idx+1,min(taken+arr[idx],pref[idx]-taken),n,k,arr);
    ll c2 = dega2(idx+1,min(pref[idx]-taken+arr[idx],taken),n,k,arr);

    return dp[idx][taken] = 1+min(c1,c2);
}

ll dega1(vll &arr,ll n,ll k){
    lp(i,0,n/2) swap(arr[i],arr[n-i-1]);
    cf(i,0,n+10){
        pref[i]=0;
        cf(j,0,k+10) dp[i][j]=-1;
    }

    cf(i,1,n) pref[i]=pref[i-1]+arr[i-1];
    ll ans = dega2(0,0,n,k,arr);
    return ans>1e9?-1:ans;
}

int main()
{

  //fast
  #ifndef ONLINE_JUDGE
      freopen("input.txt", "r" ,stdin);
      freopen("output.txt", "w" ,stdout);
  #endif
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  auto start1 = high_resolution_clock::now();
  //  clock_t launch=clock();
  //  string r = s1.substr(1, 3);
  //  while(clock()<CLOCKS_PER_SEC*10)
  //  using num = modnum<int(1e9)+7>;
  //  num len = s.size();
  //  double PI= 2 * acos(0.0);  or M_PI
  // check
  //auto start1 = high_resolution_clock::now();
  ll xx=5;
  string s;
  while(xx--)
  {
    s+='a';
  }
  tc{
    ll n,k;//m,ans=0,flag=0,temp=0,f1=0,count=0,f2=0,sum=0,xx=0,minn1=big,minn2=big,maxx1=small,maxx2=small;
    cin>>n>>k;
    vll arr(n);
    lp(i,0,n) cin>>arr[i];
    sort(all(arr));
    if(n==1){
        p1(-1)

    }
    else {p1(dega1(arr,n,k))}

  }
  auto stop1 = high_resolution_clock::now();
  auto duration = duration_cast<microseconds>(stop1 - start1);
  #ifndef ONLINE_JUDGE
      cerr << "Time: " << duration.count() / 1000.0 << endl;
      cout<<duration.count()/1000.0<<endl;
  #endif

  //clog<<((long double)(clock()-launch)/CLOCKS_PER_SEC)<<"\n";

  return 0;
}
//////////*********************end of program*********************//////////


#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define tc ll t=1; cin>>t; while(t--)
#define ll long long int
#define ull unsigned long long
#define p1(x) cout <<x <<"\n";
#define p2(x,y) cout <<x <<" " <<y <<"\n";
#define p3(x,y,z) cout <<x <<" " <<y <<" " <<z <<"\n";
#define nL cout<<"\n";
#define lp(i,l,r) for (long long int i = l; i < r; i++)
#define lpr(i,r,l) for (long long int i = r-1; i >=l ; i--)
#define mem(a,x) memset(a,x,sizeof(a))              //set elements of array to some value
#define pi 3.1415926535897932384626
#define mod 1000000007
const int N = 1000001;
#define vi vector<int>
#define vii vector< vector<long long int> >
#define vpi vector< pair<long long int,long long int> >
#define mp(a, b) make_pair(a, b)
#define pb(x) push_back(x)
#define ff first
#define ss second
#define siz 256
#define bc(n) __builtin_popcountll(n)
#define leadzero(a) __builtin_clz(a)        // count leading zeroes
#define trailzero(a) __builtin_ctz(a)       // count trailing zeroes
#define bitcount(a) __builtin_popcount(a)   // count set bits
#define lps(v,x) (lower_bound(all(v),x)-v.begin())
#define ups(v,x) (upper_bound(all(v),x)-v.begin())
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
int find_largest_digit(int n)
{
    int mx = 0 ;
    while(n>0)
    {
        mx = max(mx, n%10) ;
        n/=10 ;
    }
    return mx  ;
}
//###########################################################################################
ll no_of_digits(ll n)
{
    ll ans = 0 ;
    while(n>0)
    {
        ans++ ;
        n/=10 ;
    }
    return ans ;
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
ll power(ll x, ll y, ll p)
{
    ll res = 1;

    x = x % p;


    while (y > 0)
    {

        if (y & 1)
            res = (res*x) % p;


        y = y>>1;
        x = (x*x) % p;
    }
    return res;
}


ll modInverse(ll n, ll p)
{
    return power(n, p-2, p);
}
ll nCrModPFermat(ll n, ll r, ll p)
{

   if (r==0)
      return 1;

    ll fac[n+1];
    fac[0] = 1;
    for (ll i=1 ; i<=n; i++)
        fac[i] = fac[i-1]*i%p;

    return (fac[n]* modInverse(fac[r], p) % p *
            modInverse(fac[n-r], p) % p) % p;
}
ll multipleialNumInverse[N + 1];

// array to precompute inverse of 1! to N!
ll naturalNumInverse[N + 1];

// array to store multipleial of first N numbers
ll fact[N + 1];

// Function to precompute inverse of numbers
void InverseofNumber(ll p)
{
    naturalNumInverse[0] = naturalNumInverse[1] = 1;
    for (int i = 2; i <= N; i++)
        naturalNumInverse[i] = naturalNumInverse[p % i] * (p - p / i) % p;
}
// Function to precompute inverse of multipleials
void InverseofFactorial(ll p)
{
    multipleialNumInverse[0] = multipleialNumInverse[1] = 1;

    for (int i = 2; i <= N; i++)
        multipleialNumInverse[i] = (naturalNumInverse[i] * multipleialNumInverse[i - 1]) % p;
}

// Function to calculate multipleial of 1 to N
void multipleial(ll p)
{
    fact[0] = 1;

    for (int i = 1; i <= N; i++) {
        fact[i] = (fact[i - 1] * i) % p;
    }
}

// Function to return nCr % p in O(1) time
ll Binomial(ll N, ll R, ll p)
{
    ll ans = ((fact[N] * multipleialNumInverse[R])
              % p * multipleialNumInverse[N - R])
             % p;
    return ans;
}
int main()
{
	fast
//	clock_t launch=clock();
     ll p = 1000000007;
    InverseofNumber(p);
    InverseofFactorial(p);
    multipleial(p);
	tc
	{
    ll n;
    cin>>n;
    string s1,s2;
    cin>>s1;
    cin>>s2;
    ll one1=0,one2=0;
    lp(i,0,n)
    {
      if (s1[i]=='1') {
        /* code */
        one1++;
      }
      if (s2[i]=='1') {
        /* code */
        one2++;
      }
    }
    ll sum_min=abs(one1-one2);
    ll sum_max=one1+one2;
    if (sum_max>n) {
      /* code */
      sum_max=n-(sum_max-n);
    }
    ll ans=0;
    for (ll i = sum_min; i <= sum_max; i+=2) {
      /* code */
      ans+=Binomial(n,i,mod);
      ans%=mod;
    }
    p1(ans)

	}//tc

	//clog<<((long double)(clock()-launch)/CLOCKS_PER_SEC)<<"\n";
	return 0;
}
//////////*********************end of program*********************//////////

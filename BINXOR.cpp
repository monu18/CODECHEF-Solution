
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

ll xx[N + 1];
ll yy[N + 1];

ll fact1[N + 1];


void inverse(ll p)
{
    yy[0] = yy[1] = 1;
    for (int i = 2; i <= N; i++)
        yy[i] = yy[p % i] * (p - p / i) % p;
}
void inverse_fact1(ll p)
{
    xx[0] = xx[1] = 1;

    for (int i = 2; i <= N; i++)
        xx[i] = (yy[i] * xx[i - 1]) % p;
}

void facto(ll p)
{
    fact1[0] = 1;

    for (int i = 1; i <= N; i++) {
        fact1[i] = (fact1[i - 1] * i) % p;
    }
}

ll huhu(ll N, ll R, ll p)
{
    ll ans = ((fact1[N] * xx[R])
              % p * xx[N - R])
             % p;
    return ans;
}
int main()
{
	fast
	clock_t launch=clock();
     ll p = 1000000;
    inverse(p);
    inverse_fact1(p);
    facto(p);
	tc
	{
    ll n;
    cin>>n;
    string s1,s2;
    cin>>s1;
    cin>>s2;
    ll one1=0,one2=0;
    for (size_t i = 0; i < s1.length(); i++)
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
    ll min_value=abs(one1-one2);
    ll max_value=one1+one2;
    if (max_value>n) {
      /* code */
      max_value=n-(max_value-n);
    }
    ll ans=0;
    for (ll i = min_value; i <= max_value; i+=2) {
      /* code */
      ans+=huhu(n,i,mod)%mod;
      ans%=mod;
    }
    p1(ans)

	}//tc

	clog<<((long double)(clock()-launch)/CLOCKS_PER_SEC)<<"\n";
	return 0;
}
//////////*********************end of program*********************//////////

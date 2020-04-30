#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long
#define p1(x) cout <<x <<"\n"
#define p2(x,y) cout <<x <<" " <<y <<"\n"
#define p3(x,y,z) cout <<x <<" " <<y <<" " <<z <<"\n"
#define nL cout<<"\n"
#define lp(i,l,r) for (long long int i = l; i < r; i++)
#define lpr(i,r,l) for (long long int i = r-1; i >=l ; i--)
#define mem(a,x) memset(a,x,sizeof(a))              //set elements of array to some value
#define pi 3.1415926535897932384626
#define mod 1000000007
#define vi vector<int>
#define vii vector< vector<long long int> >
#define vpi vector< pair<long long int,long long int> >
#define mp(a, b) make_pair(a, b)
#define pb(x) push_back(x)
#define ff first
#define ss second
#define siz 256                        //characters are stored using 8 bit and there can be /256 possible characters only in lowercase alphabet
#define gcd(a,b) __gcd((a),(b))
#define lcm(a,b) ((a)*(b)) / gcd((a),(b))
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

//function to calculate a^b under mod...
ll powmod(ll a,ll b, ll modulo)
{
    if(b==0 || a==1) return 1;
    ll half=powmod(a,(b/2),modulo) % modulo;
    ll full = (half*half)%modulo;

    if(b%2) return (full*a)%modulo;
    return full%modulo;
}

//function to calculate inverse modulo under mod...assuming gcd is 1
ll invmod(ll a,ll modulo)
{
    ll check=powmod(a,modulo-2,modulo) %modulo;
    return check;
}
//
// void yes() {cout<<"YES"<<nL;}
// void no() {cout<<"NO"<<nL;}

ll max(ll a,ll b)
{
  if (a>b) {
    /* code */
    return a;
  }
  return b;
}
ll min(ll a,ll b)
{
  if (a<b) {
    /* code */
    return a;
  }
  return b;
}

void yes()
{
  cout<<"YES"<<"\n";
}
void no()
{
  cout<<"NO"<<"\n";
}
//###########################################################################################
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	clock_t launch=clock();
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
    cin>>n;
    string s,s1,s2,s3;
    cin>>s;
    ll sa1=0,sg1=0,sh1=0,sa2=0,sg2=0,sh2=0,sa3=0,sg3=0,sh3=0;
    for (size_t i = 0; i < n; i++) {
      /* code */
      if (i%3==0) {
        /* code */
        s1+=s[i];
        if (s[i]=='A') {
          /* code */
          sa1+=1;
        }
        if (s[i]=='G') {
          /* code */
          sg1+=1;
        }
        if (s[i]=='H') {
          /* code */
          sh1+=1;
        }
      }
      if (i%3==1) {
        /* code */
        s2+=s[i];
        if (s[i]=='A') {
          /* code */
          sa2+=1;
        }
        if (s[i]=='G') {
          /* code */
          sg2+=1;
        }
        if (s[i]=='H') {
          /* code */
          sh2+=1;
        }
      }
      if (i%3==2) {
        /* code */
        s3+=s[i];
        if (s[i]=='A') {
          /* code */
          sa3+=1;
        }
        if (s[i]=='G') {
          /* code */
          sg3+=1;
        }
        if (s[i]=='H') {
          /* code */
          sh3+=1;
        }
      }
    }
    ll a=0,g=0,h=0;
     ll ans=1000000000;
     ll temp=0;
     ll ia=0,ig=0,ih=0;
    temp=(sg1+sh1)+sa2+sh2+(sa3+sg3);
    if (temp<ans) {
      /* code */
      ans=temp;
      a=sa1;
      g=sg2;
      h=sh3;

      ia=0;
      ig=1;
      ih=2;

    }
    temp=(sg1+sh1)+sa3+sh3+(sa2+sg2);
    if (temp<ans) {
      /* code */
      ans=temp;
      a=sa1;
      g=sg3;
      h=sh2;

      ia=0;
      ig=2;
      ih=1;
      // if (h==g ) {
      //   /* code */
      //   ig=1;
      //   ih=2;
      // }
    }
    temp=(sa1+sh1)+sg2+sh2+(sa3+sg3);
    if (temp<ans) {
      /* code */
      ans=temp;
      a=sa2;
      g=sg1;
      h=sh3;
      ia=1;
      ig=0;
      ih=2;
      // if (a==g) {
      //   /* code */
      //   ig=1;
      //   ia=0;
      // }
    }
    temp=(sa1+sh1)+sg3+sh3+(sa2+sg2);
    if (temp<ans) {
      /* code */
      ans=temp;
      a=sa3;
      g=sg1;
      h=sh2;
      ia=2;
      ig=0;
      ih=1;
      // if (a==g) {
      //   /* code */
      //   ig=1;
      //   ia=0;
      // }
      // if (g==h) {
      //   /* code */
      //   ig=1;
      //   ih=2;
      // }
    }
    temp=(sa1+sg1)+sg2+sh2+(sa3+sh3);
    if (temp<ans) {
      /* code */
      ans=temp;
      a=sa2;
      g=sg3;
      h=sh1;
      ia=1;
      ig=2;
      ih=0;

    }
    temp=(sa1+sg1)+sg3+sh3+(sa2+sh2);
    if (temp<ans) {
      /* code */
      ans=temp;
      a=sa3;
      g=sg2;
      h=sh1;
      ia=2;
      ig=1;
      ih=0;
    }
  for (size_t i = 0; i < n; i++) {
    /* code */
    if (i%3==0) {
      /* code */
      if (ia==0) {
        /* code */
        s[i]='A';
      }
      if (ig==0) {
        /* code */
        s[i]='G';
      }
      if (ih==0) {
        /* code */
        s[i]='H';
      }
    }
    if (i%3==1) {
      /* code */
      if (ia==1) {
        /* code */
        s[i]='A';
      }
      if (ig==1) {
        /* code */
        s[i]='G';
      }
      if (ih==1) {
        /* code */
        s[i]='H';
      }
    }
    if (i%3==2) {
      /* code */
      if (ia==2) {
        /* code */
        s[i]='A';
      }
      if (ig==2) {
        /* code */
        s[i]='G';
      }
      if (ih==2) {
        /* code */
        s[i]='H';
      }
    }
  }
  cout<<ans<<"\n";
  cout<<s<<"\n";

	}

	clog<<((long double)(clock()-launch)/CLOCKS_PER_SEC)<<"\n";
	return 0;
}
//////////*********************end of program*********************//////////

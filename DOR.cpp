//mOzis_
/////*31022618*/////
//****//MONU KUMAR\****//
#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int
//#define ull unsigned long long
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


ll poww(ll n)
{
  ll temp=1;
  if (n>0) {
    /* code */

  for (size_t i = 0; i < n; i++) {
    /* code */
    temp*=2;
  }
  }
return temp;

}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	ll t;
	cin>>t;
//  clock_t launch=clock();
	while(t--)
	{
    ll l,r;
    cin>>l>>r;
    ll r1=r;
    std::string  v1;
    string v2;

    // counter for binary array
    ll k = 0;
    while (r1 > 0) {

        // storing remainder in binary array
        v1.push_back( r1 % 2+'0');
        r1 = r1 / 2;
        k++;
    //    cout<<"kkk"<<"\n";
    }
    while (l > 0) {

        // storing remainder in binary array
        v2.push_back( l % 2+'0');
        l = l / 2;
      //  k++;
    //    cout<<"kkk"<<"\n";
    }

  //  cout<<k<<"\n";
  //  nL;
  //cout<<v.size()<<"\n";

   ll diff=v1.size()-v2.size();
   for (size_t i = 0; i < diff; i++) {
     /* code */
     v2+='0';
   }
   ll len=0;
   string st="";
   for (size_t i = 0; i < v1.size(); i++) {
     /* code */
     if (v1[i]!=v2[i]) {
       /* code */
       len=i;
       break;
     }
     st+=v1[i];
   }
   reverse(v1.begin(),v1.end());
   ll ans=0;
   for (size_t i = 0; i < len; i++) {
     /* code */
     ans+=poww(i);
   }



	}

	//clog<<((long double)(clock()-launch)/CLOCKS_PER_SEC)<<"\n";
	return 0;
}
//////////*********************end of program*********************//////////

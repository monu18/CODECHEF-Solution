//mOzis_
/////*31022618*/////
//****//MONU KUMAR\****//
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long
#define p1(x) cout <<x <<"\n"
#define p2(x,y) cout <<x <<" " <<y <<"\n"
#define p3(x,y,z) cout <<x <<" " <<y <<" " <<z <<"\n"
#define nL cout<<"\n"
#define lp(i,l,r) for (long long int i = l; i < r; i++)
#define mem(a,x) memset(a,x,sizeof(a))              //set elements of array to some value
#define pi 3.1415926535897932384626
#define mod 1000000007
#define pb(x) push_back(x)
#define ff first
#define ss second
#define siz 256                        //characters are stored using 8 bit and there can be
bool anagram(char *s1, char *s2)     //256 possible characters only in lowercase alphabet
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
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	ll t;
	cin>>t;
	clock_t launch=clock();
	while(t--)
	{
		ll n;
		cin>>n;
		string s,r;
		cin>>s;
		cin>>r;
		ll o=0,e=0;
		lp(i,0,n)
		{
			if (s[i]=='1')
			{
				o++;
			}
			if (r[i]=='1')
			{
				e++;
			}
		}
		if (e==o)
		{
			p1("YES");
		}
		else
		{
			p1("NO");
		}
		nL;
	}

	clog<<((long double)(clock()-launch)/CLOCKS_PER_SEC)<<"\n";
	return 0;
}
//////////*********************end of program*********************//////////


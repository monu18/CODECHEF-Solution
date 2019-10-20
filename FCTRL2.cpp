#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
  ll t;
  cin>>t;
  while(t--){
        ll a[200],rem,i=0,n,m=0,flag;
        cin>>n;
        flag = n;

        while(flag!=0)  {
            rem = flag%10;
            a[i] = rem;
            flag = flag/10;
            i++;
             m++;
        }

         ll carry,x=0,ind=0;
         for(i=2;i<n;i++)
            {
             carry = 0;
             for(ind=0;ind<m;ind++)
             {
                 x = a[ind]*i + carry;
                 a[ind] = x%10;
                 carry = x/10;
              }

              while(carry!=0) {
                  a[ind] = carry % 10;
                  carry = carry/10;
                  ind++;
                  m++;
               }
            }

            for(i=m-1;i>=0;i--)
             {
               cout<<a[i];
             }
                cout<<"\n";
}
    return 0;
}

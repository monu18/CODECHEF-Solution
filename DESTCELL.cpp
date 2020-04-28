#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(int argc, char const *argv[]) {

  ll t;
  cin>>t;
  while(t--)
  {
    ll n,m;
    cin>>n>>m;
    ll a[n][m];
    for (size_t i = 0; i < n; i++) {
      /* code */
      for (size_t j = 0; j < m; j++) {
        /* code */
        a[i][j]=0;
      }
    }
    ll count=0;

    for (size_t k = 0; k < n*m; k++)
    {
      /* code */
      count=0;
      for (size_t i = 0; i < n; i++) {
        /* code */
        for (size_t j = 0; j < m; j++) {
          /* code */
          a[i][j]=0;
        }
      }
      for (size_t i = 0; i < n; i++) {
        /* code */
        for (size_t j = 0; j < m; j++) {
          /* code */
          a[(i+k+1)/m][(j+k+1)%m]=1;
          a[(j+k+1)%n][(i+k+1)/n]=1;
        }
      }
      for (size_t i = 0; i < n; i++) {
        /* code */
        for (size_t j = 0; j < m; j++) {
          /* code */
          if (a[i][j]==1) {
            /* code */
            count++;
          }
        }
      }
      cout<<count<<" ";

    }


  }

  return 0;
}

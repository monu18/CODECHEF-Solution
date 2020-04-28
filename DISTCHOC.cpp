#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(int argc, char const *argv[]) {
  ll n;
  cin>>n;
  ll a[n];
  ll b[n-1];
  for (size_t i = 0; i < n; i++) {
    /* code */
    cin>>a[i];

  }
  sort(a,a+n);
  ll sum=0;
  for (size_t i = 1; i < n; i++) {
    /* code */
    a[i]+=a[i-1];
    sum+=a[i-1];
  }
  cout<<sum;
  return 0;
}

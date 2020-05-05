#include <iostream>
#include<set>
using namespace std;
bool distinct(int n){
    set<int> ss;
    int s=0;
    int count=0;
    bool tr=false;
while(n!=0){
        s=n%10;
        ss.insert(s);
    n=n/10;
    count++;
}
(ss.size()==count)?tr=true:tr=false;
return tr;
}
int main() {
        int t;cin>>t;
        while(t--){
            int a,b,c;
            cin>>a>>b>>c;
            int sum=a+2*b+3*c;
            (sum&1)?cout<<"NO\n":cout<<"YES\n";
        }
	return 0;
}

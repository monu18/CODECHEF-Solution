#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool isleap(ll n)
{
if(n%4==0)
{
if(n%100==0)
{
if(n%400==0)
return true;
else
return false;

}
else
return true;

}
else
return false;
}
ll day(ll d,ll m,ll y)
{
ll t[] ={0,3,2,5,0,5,1,4,6,2,4};
y-=m<3;
return(y+y/4-y/100+y/400+t[m-1]+d)%7;
}
int main()
{

ll t;
cin>>t;
while(t--)
{
ll a,b,c,d;
cin>>a>>b>>c>>d;
if(a>2)
b++;
if(c<=1)
d--;


ll diff=d-b;


if(diff>0)
{
b--;
ll anssmaller=0;
ll anslarge=0;
anslarge=0;
anslarge+=((d/400)*101);
d=d%400;
for(ll i=1;i<=d;i++)
{
if(day(1,2,i)==6||(day(1,2,i)==0&&isleap(i)==false))
anslarge++;
}
anssmaller=((b/400)*101);
b=b%400;
for(ll i=1;i<=b;i++)
{
if(day(1,2,i)==6||(day(1,2,i)==0&&isleap(i)==false))
anssmaller++;
}

ll ans=anslarge-anssmaller;
cout<<ans<<endl;






}
else if(diff==0)
{
if(day(1,2,d)==6||(day(1,2,d)==0&&isleap(d)==false))
{
cout<<"1\n";
}
else
{
cout<<"0\n";
}
}
else
{
cout<<"0\n";

}}




}

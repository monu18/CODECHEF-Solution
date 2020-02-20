#include<bits/stdc++.h>
using namespace std;
#define int long long int
main()
{
int t;
cin>>t;
while(t--)
{int n;
cin>>n;
int p;
cin>>p;
int arr[n];
unordered_map<int,int> m1;
vector<int> formation;
for(int i=0;i<n;i++)
{cin>>arr[i];
if(arr[i]!=1)
{
m1[formation.size()]=i;
formation.push_back(arr[i]);}

}
bool flag=false;
int index=-1;
for(int i=0;i<n;i++)
{
if(p%arr[i]!=0)
{flag=true;
index=i;
break;}
}
if(flag==true)
{
cout<<"YES ";
for(int i=0;i<n;i++)
{
if(i==index)
{
int num=(p/arr[i]);
cout<<num+1<<" ";

}
else
{
cout<<"0 ";
}
}
cout<<endl;
}
else
{
bool coprime=false;
vector<pair<int,int> > v1;

for(int i=0;i<formation.size();i++)
{
for(int j=i+1;j<formation.size();j++)
{
int x=p;
int y=formation[i];
int z=formation[j];
int r=__gcd(x,y);
int s=__gcd(x,z);
int e=__gcd(r,s);
y=y/e;
z=z/e;
if(__gcd(y,z)==1&&(y!=1&&z!=1))
{
coprime=true;
v1.push_back(make_pair(i,j));
break;
}


}

}
if(coprime)
{
cout<<"YES ";
int x=formation[v1[0].first];
int y=formation[v1[0].second];

int propotionx=0;
int propotiony=0;
propotionx=p/x;
int diff=p-(propotionx-1)*x;
propotiony=diff/y;
while(propotionx--)
{
while((propotionx*x+propotiony*y)<p)
{propotiony++;}
int an=propotionx*x+propotiony*y;
if((an-x)<p&&(an-y)<p)
break;
}

for(int i=0;i<n;i++)
{
if(i==m1[v1[0].first])
cout<<propotionx<<" ";
else if(i==m1[v1[0].second])
cout<<propotiony<<" ";
else
cout<<"0 ";
}
cout<<endl;


}
else
{
cout<<"NO\n";

}


}}

}

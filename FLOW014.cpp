#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while (t--)
	{
		float a,b,c;
		int grade=5;
		cin>>a>>b>>c;
		if(a<=50) a=0;
		if(b>=0.7) b=0;
		else if(b == 0) b=5;
		if(c<=5600) c=0;

		if (a && b && c) grade=10;
		else if(a && b) grade=9;
		else if(b && c) grade=8;
		else if(a && c) grade=7;
		else if(a || b || c) grade=6;
		cout<<grade<<"\n";
	}
	return 0;
}

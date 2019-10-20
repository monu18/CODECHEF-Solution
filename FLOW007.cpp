#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t,i;
	cin>>t;
	while(t--)
	{
		int n,i,s,r;s=0;
	scanf("%d",&n);

	for(i=n;i>0;i=i/10){
		r=i%10;
		s=s*10+r;
	}
	printf("%d\n",s);

	}

	return 0;
}

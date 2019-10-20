#include <iostream>

using namespace std;

int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int a,b;
		cin>>a>>b;
		while(a>=b) a=a-b;
		cout<<a<<" \n";
	}
	return 0;
}

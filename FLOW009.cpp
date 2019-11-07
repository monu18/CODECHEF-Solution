#include <iostream>

using namespace std;

int main()
{
	int t;
	cin>>t;
	cout.precision(6);
	while(t--)
	{
		float a,b;
		cin>>a>>b;
		if (a<1000)
		{
			//cout<<fixed;
			cout<<fixed<<a*b<<" \n";
		}
		else
		{
			//cout<<fixed;
			cout<<fixed<<(a-0.1*a)*b<<" \n";

		}
	}
	return 0;
}

#include <iostream>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		float a;
		cin>>a;
		if (a<1500)
		{
			cout<<2*a<<"\n";
		}
		else
		{
			cout<<a+0.98*a+500<<"\n";

		}

	}

	return 0;
}

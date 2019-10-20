#include <iostream>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long int n,temp,zepp;
		cin>>n;
		if (n%2==0)
		{
			for (int i = 1; i <= n; i++)
			{
				if (i%2==0)
				{
					temp=i-1;
				}
				else
				{
					temp=i+1;
				}
				cout<<temp<<" ";
			}
		}
		else
		{
			zepp=n-3;
			for (int i = 1; i <= zepp; i++)
			{
				if (i%2==0)
				{
					temp=i-1;
				}
				else
				{
					temp=i+1;
				}
				cout<<temp<<" ";
			}
			cout<<n-1<<" "<<n<<" "<<n-2;
		}
	cout<<"\n";
	}
	return 0;
}

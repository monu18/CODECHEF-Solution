#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	while(true)
	{
		int temp;
		cin>>temp;
		if(temp==42)
		{
			break;
		}
		else
		{
			cout<<temp<<"\n";
		}
	}
	return 0;
}

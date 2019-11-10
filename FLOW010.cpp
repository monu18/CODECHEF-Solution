#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string a;
		cin>>a;
		if (a=="B" || a=="b")
		{
			cout<<"BattleShip\n";
		}
		else if (a=="c" || a=="C")
		{
			cout<<"Cruiser\n";
		}
		else if (a=="D" || a=="d")
		{
			cout<<"Destroyer\n";
		}
		else
		{
			cout<<"Frigate\n";

		}

	}
	return 0;
}

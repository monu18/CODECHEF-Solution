#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long int a,b,n,temp,x=1;
		cin>>n;
		temp=n;
		while(temp)
		{
			temp=temp/10;
			if(temp<10)
            {
                a=temp;
                break;
            }
			x++;
		}
		b=n%10;
		cout<<a+b<<"\n";
	}
	return 0;
}

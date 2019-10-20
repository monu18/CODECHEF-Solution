#include <iostream>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long int a,b,c,d,e,f,n;
		cin>>n;
				    a=n/100;
		    b=(n%100)/50;
		    c=((n%100)%50)/10;
		    d=(((n%100)%50)%10)/5;
		    e=((((n%100)%50)%10)%5)/2;
		    f=((((n%100)%50)%10)%5)%2;
		cout<<a+b+c+d+e+f<<" \n";
	}
	return 0;
}

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n,k=0;
	cout<<"Enter the number: ";
	cin>>n;
	while(n!=0)
	{
		if(n%2==0)
		{
			n=n/2;
			k++;
			n--;
			k++;
		}
		else
		{
			n--;
			k++;
		}
	}
	cout<<"No. of steps required to reduce the number to zero: "<<k;
	getch();
	return 0;
}

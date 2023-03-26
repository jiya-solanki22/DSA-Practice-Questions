#include<iostream>
#include<conio.h>
using namespace std;
bool containDuplicate(int a[],int n)
{
	int t=a[0];
	for(int i=1;i<n;i++)
	{
		if(t==a[i])
		return true;
	}
	return false;
}
int main()
{
	int a[10],n,i;
	cout<<"Enter no. of elements: ";
	cin>>n;
	cout<<"Enter elements: ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	if(containDuplicate)
	{
		cout<<"true";
	}
	else
	{
		cout<<"false";
	}
	getch();
	return 0;
}

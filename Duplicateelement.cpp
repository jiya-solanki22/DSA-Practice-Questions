#include<iostream>
#include<conio.h>
using namespace std;
bool containDuplicate(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		if(a[i]==a[i+1])
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
	bool temp=containDuplicate(a,n);
	cout<<"Duplications present: "<<temp;
	getch();
	return 0;
}

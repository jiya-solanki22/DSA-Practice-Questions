#include<bits/stdc++.h>
using namespace std;
int ceil(int a[],int low,int high,int x)
{
	int i;
	if(x<=a[low])
		return low;
	for(i=low;i<high;i++)
	{
		if(a[i]==x)
		return i;
		
		if(a[i]<x && a[i+1]>=x)
		return i+1;
	}
	return -1;
}
int floor(int a[],int low,int high,int x)
{
	int i;
	if(x>=a[high])
		return high;
	for(i=low;i<high;i++)
	{
		if(a[i]==x)
		return i;
		
		if(a[i]<x && a[i+1]>=x)
		return i;
	}
	return -1;
}
int main()
{
	int a[] = {1,2,8,10,10,12,19};
	int x = 5;
	int n = sizeof(a)/sizeof(a[0]);
	int m=floor(a,0,n-1,x);
	if(m==-1)
	cout<<"\nFloor doesn't exists";
	else
	cout<<"\nFloor: "<<a[m];
	int k=ceil(a,0,n-1,x);
	if(k==-1)
	cout<<"\nCeil doesn't exists";
	else
	cout<<"\nCeil: "<<a[k];
	return 0;
}

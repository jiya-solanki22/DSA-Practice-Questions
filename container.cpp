#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int container(int a[],int n)
{
	int area=0; 
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			area=max(area,min(a[i],a[j])*(j-i));
		}
	}
	return area;
}
int main()
{
	int a[]={1,8,6,2,5,4,8,3,7};
	int n=sizeof(a)/sizeof(a[0]);
	cout<<"Water stored= "<<container(a,n);
	return 0;
}

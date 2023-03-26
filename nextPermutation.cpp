#include <iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
void nextPermutation(int a[],int n)
{
	int i=n-2;
	while(i>=0&&a[i]>=a[i+1])
	{
		i--;
	}
	if(i>=0)
	{
		int j=n-1;
		while(a[j]<=a[i])
		{
			j--;
		}
		swap(a,i,j);
	}
	reverse(a,i+1,n-1);
}
void swap(int a[],int i,int j)
{
	int temp=a[i];
	a[i]=a[j];
	a[j]=temp;
}
void reverse(int a[],int i,int j)
{
	while(i<j)
	{
		swap(a,i++;j--);
	}
}
int main()
{
	int a[]={1,2,3,6,5,4};
	int n=sizeof(a)/sizeof(a[0]);
	cout<<nextPermutation(a,n);
	return 0;
}

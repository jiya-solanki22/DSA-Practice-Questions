#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void insertionSort(int a[],int n)
{
	int i,j,temp;
	cout<<"Enter elements: ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=1;i<=n-1;i++)
	{
		temp=a[i];
		j=i-1;
		while(temp<a[j] && j>=0)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
	cout<<"Sorted Array: \n";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
}
int main()
{
	int a[10],n;
	cout<<"Enter no. of elements: ";
	cin>>n;
	insertionSort(a,n);
	return 0;
}

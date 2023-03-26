#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void binarySearch(int a[],int n)
{
	int i,search,beg,end,mid,flag=1,loc;
	cout<<"Enter elements: ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter element to be searched: ";
	cin>>search;
	beg=0;
	end=n-1;
	mid=(beg+end)/2;
	if(a[mid]==search)
		cout<<"\nElement found at position at position: "<<mid+1;
	else
	{
		while(a[mid]!=search && beg<=end)
		{
			mid=(beg+end)/2;
			if(a[mid]==search)
			{
				flag=0;
				loc=mid+1;
				break;
			}
			else
			{
			 	if(search>a[mid])
					beg=mid+1;
				else
					end=mid-1;
			}
		}
	}
	if(flag==0)
	{
		cout<<"\nElement found at position: "<<loc;
	}
	else
	{
		cout<<"\nElement not found";
	}
}
int main()
{
	int a[10],n;
	cout<<"Enter no. of elements: ";
	cin>>n;
	binarySearch(a,n);
	return 0;
}

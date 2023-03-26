#include<iostream>
#include<conio.h>
using namespace std;
int search(int a[],int n,int k)
{
	int low=0,high=n-1;
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(a[mid]==k)
		{
			return mid;
		}
		if(a[low]<=a[mid])
		{
			if(k<=a[mid]&&k>=a[low])
			{
				high=mid-1;
			}
			else
			{
				low=mid+1;
			}
		}
		else
		{
			if(k>=a[mid]&&k<=a[high])
			{
				low=mid+1;
			}
			else
			{
				high=mid-1;
			}
		}
	}
	return -1;
}
int main()
{
	int a[]={1, 4, 6, 8, 11, 13, 15};
	int k=3;
	cout<<search(a,7,k);
	return 0;
}

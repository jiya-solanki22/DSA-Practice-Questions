#include <bits/stdc++.h>
using namespace std;
int searchArray(int a[],int n, int target)
{
	int low=0;
	int high=n-1;
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(a[mid]==target)
		{
			return mid;
		}
		if(a[low]<=a[mid])
		{
			if(target<=a[mid]&&target>=a[low])
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
			if(target<=a[high]&&target>=a[mid])
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
	int a[]={4,5,6,7,0,1,2};
	int n=sizeof(a)/sizeof(a[0]);
	int target=0;
	int temp=searchArray(a,n,target);
	cout<<temp;
	return 0;
}

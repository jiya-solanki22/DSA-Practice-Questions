#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int maxSubArray(int a[],int n)
{
	int curr=0,max_till_now=0;
	for(int i=0;i<n;i++)
	{
		curr+=a[i];
		if(max_till_now<curr)
		{
			max_till_now=curr;
		}
		if(curr<0)
		curr=0;
	}
	return max_till_now;
}
int main()
{
	int a[]={-2,1,-3,4,-1,2,1,-5,4};
	int n=sizeof(a)/sizeof(a[0]);
	cout<<maxSubArray(a,n);
	return 0;
}

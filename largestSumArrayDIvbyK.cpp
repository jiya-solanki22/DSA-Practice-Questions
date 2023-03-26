#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int longestSubarrayWithSumDivisible(int a[], int n,int k)
{
	int maxx=0;
	for(int i=0;i<n;i++)
	{
		int sum=0;
		for(int j=i;j<n;j++)
		{
			sum+=a[j];
			if(sum%k==0)
			{
				maxx=max(maxx,j-i+1);
			}
		}
	}
	return maxx;
}
int main()
{
	int a[]={2,7,6,1,4,5};
	int n=sizeof(a)/sizeof(a[0]);
	int k=3;
	cout<<"Maximum length subarray: "<<longestSubarrayWithSumDivisible(a,n,k);
	return 0;	
}

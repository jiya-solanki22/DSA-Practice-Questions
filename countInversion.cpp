#include <bits/stdc++.h>
using namespace std;
int count(int a[],int n)
{
	int counts=0;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j] && i<j)
			{
				counts++;
			}
		}
	}
	return counts;
}
int main()
{
	int a[]={2,4,1,3,5};
	int n=sizeof(a)/sizeof(a[0]);
	cout<<count(a,n);
	return 0;
}

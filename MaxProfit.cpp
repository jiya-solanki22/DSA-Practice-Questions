#include <bits/stdc++.h>
using namespace std;
int maxProfit(int a[], int n)
{
	int buy=a[0];
	int profit=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]<buy)
		{
			buy=a[i];
		}
		else if(a[i]-buy > profit)
		{
			profit=a[i]-buy;
		}
}
	return profit;
}
int main()
{
	int a[]={7,1,5,3,6,4};
	int n=sizeof(a)/sizeof(a[0]);
	int temp=maxProfit(a,n);
	cout<<temp;
	return 0;
}

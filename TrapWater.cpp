#include <iostream>  
#include <bits/stdc++.h>  
using namespace std;  
/*int trapWater(int height[], int n)
{
	int diff=0;
	for(int i=0;i<n-1;i++)
	{
		diff+=abs(height[i]-height[i+1]);
	}
	if(height[0]<height[n-1])
	{
		diff--;
	}
	return diff;
}*/
int trapWater(int height[], int n)
{
	int diff;
	for(int i=0;i<n-1;i++)
	{
		int left=height[i];
		for(int j=0;j<i;j++)
		{
			left=max(left,height[j]);
		}
		int right=height[i];
		for(int j=i+1;j<n;j++)
		{
			right=max(right,height[j]);
		}
		diff+=(min(left,right)-height[i]);
	}
	return diff;
}
int main()
{
	int height[]={4,2,0,3,2,5};
	int n=sizeof(height)/sizeof(height[0]);
	cout<<"Units of water trapped = "<<trapWater(height,n);
	return 0;
}

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> lonely(vector<int> &nums)
{
	int n=nums.size();
	
	sort(nums.begin(),nums.end());
	vector<int>result;
	if(nums[1]-nums[0]>1)
	{
		result.push_back(nums[0]);
}
	if(nums[n-1]-nums[n-2]>1)
	{
	result.push_back(nums[n-1]);
}
	for(int i=1;i<n-1;i++)
	{
		if((nums[i]-nums[i-1]>1) &&(nums[i+1]-nums[i]>1))
		{
			result.push_back(nums[i]);
		}
	}
	cout<< result;
}
int main()
{
	vector<int>a;
	a.push_back(10);
	a.push_back(5);
	a.push_back(6);
	a.push_back(8);
	lonely(a);
	
	return 0;
}

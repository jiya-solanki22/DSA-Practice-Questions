#include<bits/stdc++.h>
using namespace std;
void setZeroes(vector<vector<int>> &a, int m, int n)
{
	vector<vector<int>>ans;
	for(int i=0;i<m;i++)
	{
		vector<int>curr;
		for(int j=0;j<n;j++)
		{
			curr.push_back(1);
		}
		ans.push_back(curr);
	}
	//traversing row wise
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i][j]==0)
			{
				for(int k=0;k<n;k++)
				{
					ans[i][k]=0;
				}
				break;
			}
		}
	}
	//traversing column wise
	for(int j=0;j<n;j++)
	{
		for(int i=0;i<m;i++)
		{
			if(a[i][j]==0)
			{
				for(int k=0;k<m;k++)
				{
					ans[k][j]=0;
				}
			}
		}
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(ans[i][j]==0)
			{
				a[i][j]=0;
			}
		}
	}
}
int main()
{
	vector<vector<int>>a{{1,1,1}, {1,0,1}, {1,1,1}};
	int m=a.size();
	int n=a[0].size();
	setZeroes(a,m,n);
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

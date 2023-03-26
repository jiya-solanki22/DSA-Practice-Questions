#include<bits/stdc++.h>
#include<iostream>
#include<conio.h>
using namespace std;
void rotate(vector<vector<int>>&a)
{
	int n=a.size();
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			swap(a[i][j],a[j][i]);
		}
	}
	for(int i=0;i<n;i++)
	{
		reverse(a[i].begin(),a[i].end());
	}
}
int main()
{
	vector<vector<int>>a{{1,2,3}, {4,5,6}, {7,8,9}};
	int p=a.size();
	int q=a[0].size();
	rotate(a);
	for(int i=0;i<p;i++)
	{
		for(int j=0;j<q;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	getch();
	return 0;
}

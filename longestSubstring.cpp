#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int longestSubstring(string str)
{
	int res=0;
	int n=str.size();
	for(int i=0;i<n;i++)
	{
		vector<bool>visited(256);
		for(int j=i;j<n;j++)
		{
			if(visited[str[j]]==true)
			break;
			else
			{
				res=max(res,j-i+1);
				visited[str[j]]=true;
			}
		}
		visited[str[i]]=false;
	}
	return res;
}
int main()
{
	string str="abcabcbb";
	cout<<longestSubstring(str);
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
void findFourElements(int a[],int n,int x)
{
	unordered_map<int, pair<int, int> > mp;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			mp[a[i]+a[j]]={i,j};
		}
	}
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			int sum=a[i]+a[j];
			if(mp.find(x-sum)!=mp.end())
			{
				pair<int,int> p=mp[x-sum];
				if(p.first!=i && p.first!=j && p.second!=i && p.second!=j)
				{
					cout<<a[i]<<","<<a[j]<<","<<a[p.first]<<","<<a[p.second];
					return;
				}
			}
		}
	}
}
int main()
{
	int a[] = { 10, 20, 30, 40, 1, 2 };
    int n = sizeof(a) / sizeof(a[0]);
    int x = 91;
    
    // Function call
    findFourElements(a,n,x);
    return 0;
}

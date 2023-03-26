#include<bits/stdc++.h>
using namespace std;
int countTriplets(int a[],int n,int sum)
{
	int ans=0;
	for(int i=0;i<n-2;i++)
	{
		for(int j=i+1;j<n-1;j++)
		{
			for(int k=j+1;k<n;k++)
			{
				if(a[i]+a[j]+a[k]<sum)
				{
					ans++;
				}
			}
		}
	}
	return ans;
}
int main()
{
	int a[] = { -2, 0, 1, 3 };
    int n = sizeof a / sizeof a[0];
    int sum = 2;
    cout << countTriplets(a, n, sum) << endl;
    return 0;
}

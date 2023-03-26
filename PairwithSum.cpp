#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool sumPair(int a[], int n, int x)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]+a[j]==x)
			{
				return true;
			}
		}
	}	
	return false;
}
int main()
{
	int a[]={11,15,6,8,9,10};
	int n=sizeof(a)/sizeof(a[0]);
	int x=16;
	if (sumPair(a, n, x))
        cout << "true";
    else
        cout << "false";return 0;
}

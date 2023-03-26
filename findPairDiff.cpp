#include<bits/stdc++.h>
using namespace std;
bool findPair(int a[],int n,int x)
{
	int i=0,j=1;
	sort(a,a+n);
	while(i<n && j<n)
	{
		if(i!=j && (a[i]-a[j]==x || a[j]-a[i]==x))
		{
			cout<<"Pair found ("<<a[i]<<", "<<a[j]<<")";
			return true;
		}
		else if(a[j]-a[i]<x)
		{
			j++;
		} 
		else
		{
			i++;
		}
	}
	cout<<"No such pair found";
	return false;
}
int main()
{
	int a[] = {5,20,3,2,50,80};
	int x = 78;
	int n = sizeof(a)/sizeof(a[0]);
	findPair(a,n,x);
	return 0;
}

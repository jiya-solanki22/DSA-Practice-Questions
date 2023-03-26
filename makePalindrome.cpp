#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int makePalindrome(int a[], int n)
{
	int i,j,step=0;
	for(i=0;j=n-1;i<=j)
	{
		if(a[i]==a[j])
		{
			i++;
			j--;
		}
		else if(a[i]>a[j])
		{
			j--;
			a[j]+=a[j+1];
			step++;
		}
		else
		{
			i++;
			a[i]+=a[i-1];
			step++;
		}
	}
	return step;
}
int main()
{
	int a[]={1,4,5,9,1};
	int n=sizeof(a)/sizeof(a[0]);
	cout << "Count of minimum operations is "<<makePalindrome(a, n) << endl;
	return 0;
}

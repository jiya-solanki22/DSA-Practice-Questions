#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void combination(int a[],int data[],int start,int end,int index,int r)
{
	if(index==r)
	{
		for(int j=0;j<r;j++)
		{
			cout<<data[j]<<" ";	
		}
		cout<<"\n";
		return;
	}
	for(int i=start;i<=end && end-i+1>=r-index;i++)
	{
		data[index]=a[i];
		combination(a,data,i+1,end,index+1,r);
	}
}
void printCombo(int a[],int n,int r)
{
	int data[r];
	combination(a,data,0,n-1,0,r);
}
int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int r = 3;
    int n = sizeof(a)/sizeof(a[0]);
    printCombo(a, n, r);
}



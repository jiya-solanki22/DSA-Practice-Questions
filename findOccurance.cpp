#include<iostream>
#include<conio.h>
#include<bits/stdc++.h>
using namespace std;
/*int findOccurance(int a[],int n, int idx,int key)
{
	if(idx==n)
	{
		return -1;
	}
	int index=findOccurance(a,n,idx+1,key);

	 first occurance of key
	if(a[idx]==key)
	{
		return idx;
	}
	if(a[idx]==key && index==-1)
	{
		return idx;
	}
	else
	{
		return index;
	}
}*/
int findOccurance(int a[],int index,int key)
{
	if(index==-1)
	{
		return -1;
	}
	if(a[index]==key)
	{
		return index;
	}
	findOccurance(a,index-1,key);
}
int main()
{
	int a[]={1,2,31,2,5};
	cout<<findOccurance(a,4,6);
	getch();
	return 0;
}

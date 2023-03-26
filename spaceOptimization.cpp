#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a=2,b=10;
	int size=abs(b-a)+1;
	int *arr=new int[size];
	for(int i=a;i<=b;i++)
	{
		if(i%2==0||i%5==0)
		{
			arr[i-a]=1;
		}
	}
	cout<<"Multiples of 2 & 5: \n";
	for(int i=a;i<=b;i++)
	{
		if(arr[i-a]==1)
		{
			 cout<<i<<"\t";
		}
	}
	return 0;
}

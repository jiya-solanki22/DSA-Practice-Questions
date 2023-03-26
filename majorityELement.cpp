#include<bits/stdc++.h>
using namespace std;
void majorityElement(int a[],int n)
{
	int maxcount=0,index=-1;
	for(int i=0;i<n;i++)
	{
		int count=0;
		for(int j=0;j<n;j++)
		{
			if(a[i]==a[j])
			{
				count++;
			}
		}
		if(maxcount<count)
		{
			maxcount=count;
			index=i;
		}
	}
	if(maxcount>n/2)
	cout<<a[index];
	else
	cout<<"No majority element";
}
int main()
{
	int a[] = {3, 3, 4, 2, 4, 4, 2, 4};
	int n = sizeof(a)/sizeof(a[0]);
	majorityElement(a,n);
	return 0;
}

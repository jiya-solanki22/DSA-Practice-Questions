#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
void common(int a[],int b[],int c[],int n1,int n2,int n3)
{
	int i=0,j=0,k=0;
	while(i<n1&&j<n2&&k<n3)
	{
		if(a[i]==b[j] && b[j]==c[k])
		{
			cout<<a[i]<<endl;
			i++;
			j++;
			k++;
		}
		else if(a[i]<b[j])
		{
			i++;
		}
		else if(b[j]<c[k])
		{
			j++;
		}
		else
		{
			k++;
		}
	}
}
int main()
{
	int a[]={1, 5, 10, 20, 40, 80};
	int b[]={6, 7, 20, 80, 100};
	int c[]={3, 4, 15, 20, 30, 70, 80, 120};
	int n1=sizeof(a)/sizeof(a[0]);
	int n2=sizeof(b)/sizeof(b[0]);
	int n3=sizeof(c)/sizeof(c[0]);
	cout<<"Common Elements are: -"<<endl;
	common(a,b,c,n1,n2,n3);
	return 0;
}

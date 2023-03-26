#include<bits/stdc++.h>
using namespace std;
#define R 5
#define C 4
bool isValid(int i,int j)
{
	if(i<0||i>=R||j>=C||j<0)
	{
		return false;
	}
	return true;
}
void diagonal(int a[][C])
{
	for(int k=0;k<R;k++)
	{
		cout<<setw(3)<<a[k][0];
		int i=k-1, j=1;
		while(isValid(i,j))
		{
			cout<<setw(3)<<a[i][j];
			i--;
			j++;
		}
		cout<<endl;
	}
	for(int k=1;k<C;k++)
	{
		cout<<setw(3)<<a[R-1][k];
		int i=R-2, j=k+1;
		while(isValid(i,j))
		{
			cout<<setw(3)<<a[i][j];
			i--;
			j++;
		}
		cout<<endl;
	}
}
int main()
{
	int a[R][C]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20}};
	diagonal(a);
	return 0;
}

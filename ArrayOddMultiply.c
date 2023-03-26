#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5][5],i,j,mul=1,sum=0,m,n;
	printf("Enter the no. of rows and columns: ");
	scanf("%d%d",&m,&n);
	printf("Enter the elements: ");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]%2!=0)
			{
				mul=mul*a[i][j];
			}
		}
	}	
	printf("Multiplications of all odd values=%d",mul);
}

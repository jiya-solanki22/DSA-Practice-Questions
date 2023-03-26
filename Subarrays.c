#include<stdio.h>
#include<conio.h>
//Subarrays of an array
void main()
{
	int a[10],i,n,j,k;
	printf("Enter the no. of elements: ");
	scanf("%d",&n);
	printf("Enter the elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nSubarrays of given array: \n");
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			for(k=i;k<=j;k++)
			{
				printf("%d\t",a[k]);
			}
			printf("\n");
		}
	}
	getch();
}

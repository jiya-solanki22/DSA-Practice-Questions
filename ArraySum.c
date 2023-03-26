#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i,sum=0,n;
	printf("Enter no. of elements: ");
	scanf("%d",&n);
	printf("Enter the elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	printf("Sum of elements of array: %d",sum);
}

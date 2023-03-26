#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],temp[10],i,n,d,k=0;
	printf("Enter the no. of elements: ");
	scanf("%d",&n);
	printf("Enter the elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the value about which the array is to be rotated left: ");
	scanf("%d",&d);
	for(i=d;i<n;i++)
	{
		temp[k]=a[i];
		k++;
		//printf("%d\t",temp[i]);
	}
	for(i=0;i<d;i++)
	{
		temp[k]=a[i];
		k++;
		//printf("%d\t",temp[i]);
	}
	for(i=0;i<n;i++)
	{
		a[i]=temp[i];
		printf("%d\t",a[i]);
	}
}

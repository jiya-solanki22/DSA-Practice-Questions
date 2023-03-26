#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i,max,n;
	printf("Enter no. of elements: ");
	scanf("%d",&n);
	printf("Enter the elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=0;i<n;i++)
	{
		if(max<a[i])
		max=a[i];
	}	
	printf("Maximum element: %d",max);
}

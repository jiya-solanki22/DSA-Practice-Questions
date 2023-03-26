#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i,min,n;
	printf("Enter no. of elements: ");
	scanf("%d",&n);
	printf("Enter the elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	min=a[0];
	for(i=0;i<n;i++)
	{
		if(min>a[i])
		min=a[i];
	}	
	printf("Minimum element: %d",min);
}

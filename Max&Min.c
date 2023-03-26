#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i,n,max,min;
	printf("Enter no. of elements: ");
	scanf("%d",&n);
	printf("\nEnter elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	min=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		max=a[i];
		else if(a[i]<min)
		min=a[i];
	}
	printf("\nMaximum element: %d",max);
	printf("\nMinimum element: %d",min);
	getch();
}

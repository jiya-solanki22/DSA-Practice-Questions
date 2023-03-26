#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i,max1,n,max2,loc;
	printf("Enter no. of elements: ");
	scanf("%d",&n);
	printf("Enter the elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	max1=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max1)
		{
			max1=a[i];
			loc=i;
		}
	}
	max2=a[0];
	for(i=0;i<n;i++)
	{
		if(loc==i)
		{
			continue;
		}
		else
		{
			if(a[i]>max2)
			{
				max2=a[i];
			}
		}
	}
	printf("Second maximum element: %d\n",max2);
	printf("Maximum element: %d",max1);
}

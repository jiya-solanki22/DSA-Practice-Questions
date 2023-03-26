#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i,max1,max2,n,temp;
	printf("Enter no. of elements: ");
	scanf("%d",&n);
	printf("Enter the elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	max1=a[0];
	max2=a[1];
	if(max1<max2)
	{
		temp=max1;
		max1=max2;
		max2=temp;
	}
	for(i=2;i<n;i++)
	{
		if(a[i]>max1)
		{
			max2=max1;
			max1=a[i];
		}
		else if(a[i]>max2 && a[i]!=max1)
		{
			max2=a[i];
		}
	}
	printf("Second maximum element: %d\n",max2);
	printf("Maximum element: %d",max1);
	getch();
}

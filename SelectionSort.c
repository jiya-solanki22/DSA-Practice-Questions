#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],n,i,j,temp,min,loc;
	printf("Enter no. of elements: ");
	scanf("%d",&n);
	printf("Enter elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		min=a[i];
		loc=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<min)
			{
				min=a[j];
				loc=j;
			}
		}
		if(i!=loc)
		{
			temp=a[i];
			a[i]=a[loc];
			a[loc]=temp;
		}
	}
	printf("Sorted Array: \n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	getch();
}

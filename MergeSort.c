#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],b[10],c[20],i,j,m,n,k=0;
	printf("Enter no. of elements of list - 1: ");
	scanf("%d",&m);
	printf("Enter elements: ");
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter no. of elements of list - 2: ");
	scanf("%d",&n);
	printf("Enter elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	i=0;
	j=0;
	while(i<m && j<n)
	{
		if(a[i]<a[j])
		{
			c[k]=a[i];
			i++;
		}
		else
		{
			c[k]=b[j];
			j++;
		}
		k++;
	}
	if(i>=m)
	{
		while(j<n)
		{
			c[k]=b[j];
			j++;
			k++;
		}
	}
	if(j>=n)
	{
		while(i<m)
		{
			c[k]=a[i];
			i++;
			k++;
		}
	}
	printf("Sorted Array: \n");
	for(i=0;i<m+n;i++)
	{
		printf("%d\t",c[k]);
	}
	getch();
}

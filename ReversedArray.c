#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i,j,n,temp;
	printf("Enter no. of elements: ");
	scanf("%d",&n);
	printf("Enter the elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	i=0; j=n-1;
	while(i<j)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		i++;
		j--;
	}
	printf("Reversed array: ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}

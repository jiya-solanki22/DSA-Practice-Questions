#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],n,i,j,temp;
	printf("Enter no. of elements: ");
	scanf("%d",&n);
	printf("Enter elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n-1;i++)
	{
		temp=a[i];
		j=i-1;
		while(temp<a[j] && j>=0)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
	printf("Sorted Array: \n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	getch();
}

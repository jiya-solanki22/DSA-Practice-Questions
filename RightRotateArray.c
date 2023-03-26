#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i,n,d,k=0;
	printf("Enter the no. of elements: ");
	scanf("%d",&n);
	printf("Enter the elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The elements: ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\nEnter the value about which the array is to be rotated right after k iterations: ");
	scanf("%d",&k);
	k%=n;
	for(i=0;i<n;i++)
	{
		if(i<k)
		printf("%d\t",a[n+i-k]);
		else
		printf("%d\t",a[i-k]);
	}
	getch();
}

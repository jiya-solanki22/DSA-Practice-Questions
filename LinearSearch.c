#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i,search,n,loc,flag=0;
	printf("Enter no. of elements: ");
	scanf("%d",&n);
	printf("Enter elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter element to be searched: ");
	scanf("%d",&search);
	for(i=0;i<n;i++)
	{
		if(a[i]==search)
		{
			flag=1;
			loc=i+1;
			break;
		}	
	}
	if(flag==1)
	printf("Element found at position: %d",loc);
	else
	printf("Element not found");
	getch();
}

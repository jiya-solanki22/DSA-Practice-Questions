#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i,search,n,beg,end,mid,flag=1,loc;
	printf("Enter no. of elements: ");
	scanf("%d",&n);
	printf("Enter elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter element to be searched: ");
	scanf("%d",&search);
	beg=0;
	end=n-1;
	mid=(beg+end)/2;
	if(a[mid]==search)
		printf("\nElement found at position at position: %d",mid+1);
	else
	{
		while(a[mid]!=search && beg<=end)
		{
			mid=(beg+end)/2;
			if(a[mid]==search)
			{
				flag=0;
				loc=mid+1;
				break;
			}
			else
			{
			 	if(search>a[mid])
					beg=mid+1;
				else
					end=mid-1;
			}
		}
	}
	if(flag==0)
	{
		printf("\nElement found at position: %d",loc);
	}
	else
	{
		printf("\nElement not found");
	}
	getch();
}

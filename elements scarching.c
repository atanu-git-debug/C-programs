#include<stdio.h>
int main()
{
	int a[10],i,s,f=0,n;
	printf("Enetr how many elements you want to enter in the array: ");
	scanf("%d",&n);
	printf("Enter elements of the array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter element you looking for: ");
	scanf("%d",&s);
	for(i=0;i<n;i++)
	{
		if(s==a[i])
		{
			f++;
			
		}
	}
	if(f>0)
	{
		printf("Element found %d times",f);
	}
	else
	{
		printf("Element not found");
	}
	return 0;
}
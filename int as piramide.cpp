#include<stdio.h>
int main()
{
	int i,j,k,n;
	
	printf("Enter line numbers : ");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		for(j=n-i;j>=1;j--)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("%d ",k);
		}
		printf("\n");
	}
	return 0;
}
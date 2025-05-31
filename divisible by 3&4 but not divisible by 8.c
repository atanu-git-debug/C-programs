#include<stdio.h>
int main()
{
	int sp,ep,i;
	
	printf("enter the starting point : ");
	scanf("%d",&sp);
	
	printf("Enter the ending point : ");
	scanf("%d",&ep);
	
	
	for(i=sp;i<=ep;i++)
	{if(i%3==0 && i%4==0 && i%8!=0)
	  printf("%d\n",i);  
	}
	return 0;
}
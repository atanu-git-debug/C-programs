#include<stdio.h>
int factorial(int n)
{
	int i,c=1;
    if (n==0)
    {
        return 1;
    }
    else
    {
      for(i=0;i<=n;i++)  
      {
      	c=c*i;
	  }
	  return c;
    }
}
void main()
{
    int fact,number;
    printf("Enter number: ");
    scanf("%d",&number);
    fact= factorial(number);
    printf("%d",&fact);
}
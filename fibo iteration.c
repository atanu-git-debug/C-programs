#include<stdio.h>
void fibo(int n)
{
	int a=0,b=1,c,i;
	if(n==1)
	{
		printf("\n%d",a);
	}
	else if (n>=2)
	{
		printf("\n%d\n%d",a,b);
		for(i=3;i<=n;i++)
		{
			c=a+b;
			printf("\n%d",c);
			a=b;
			b=c;
		}
	}
}
int main()
{
	int n;
	printf("Enetr the last number of the serice: ");
	scanf("%d",&n);
	fibo(n);
	return 0;
}
#include<stdio.h>
void complex(int a , int b, int c, int d)
{
	int e,f;
	e=a+b;
	f=c+d;
	printf("Sum of two complex number is %d+%di",e,f);
}
int main()
{
	int a,b,c,d;
	printf("Enter two real number: ");
	scanf("%d%d",&a,&b);
	printf("Enter two imaginary number: ");
	scanf("%d%d",&c,&d);
	complex(a,b,c,d);
	return 0;
}
#include<stdio.h>
int main()	
{
	int n,cn,rn=0,r,on;
	printf("Enter a number: ");
	scanf("%d",&n);
	cn=on=n;
	while(on>0)
	{
		r=n%10;
		rn=rn+r*10;
		on/10;
	}
	if(cn==rn)
	{
		printf("Palindrome");
	}
	else
	{
		printf("Not palindrome");
	}
	return 0;
}
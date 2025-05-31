#include<stdio.h>
int main()
{
	char n[30],count=0,i;
	printf("Enter your name : ");
	scanf("%s",n);
     for (i=0;n[i]!='\0';i++)
     {
     	count++;
     }
     printf("no.of ch. is %d",count);
     return 0;
}
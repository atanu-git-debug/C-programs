#include<stdio.h>
#include<string.h>
int main()
{
	char a[30],b[30];
	int i,j=0,l;
	printf("Enter your word or sentence : ");
	gets(a);
	
	l=strlen(a);
	
	for(i=l-1;i>=0;i--)
	{
		b[j]=a[i];
		j++;
	}
	b[j]='\0';
	if(strcmp(a,b)==0)
	  {
	  	printf("palindrome");
	  }
	else
	 printf("Not palindrome");
	
	return 0;   
}
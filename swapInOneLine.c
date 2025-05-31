#include<stdio.h>
int main(){
	int a = 4;
	int b = 9;
	
	b = a + b - (a = b);
	
	printf("%d\n",a);
	printf("%d",b);
	
	return 0;
}
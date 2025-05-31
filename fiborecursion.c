#include <stdio.h>
int fibo(int a , int b, int n){
	if(n==0){
		return 0;
	}
	
	int c;
	c=a+b;
	printf("\n%d",c);
	fibo(b,c,n-1);
}
int main(){
	int a,b,n;
	a=0;b=1;
	printf("Enter a number: ");
	scanf("%d",&n);
	printf("%d\n%d",a,b);
	fibo(a,b,n-2);
	return 0;
}
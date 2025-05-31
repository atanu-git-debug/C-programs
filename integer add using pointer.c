#include<stdio.h>
int add(int *a,int *b,int *t){
	
	*t=*a+*b;
	
	return *t;
}
int main(){
	
	int a,b,total;
	
	printf("enter two number: ");
	scanf("%d%d",&a,&b);
	
	add(&a,&b,&total);
	
	printf("%d",total);
	
	return 0;
}
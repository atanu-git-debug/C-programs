#include<stdio.h>
#include<math.h>
int main()
{
	float ci,a,p,t,r;
	printf("Enter principle : ");
	scanf("%f",&p);
	printf("Enter time (in year): ");
	scanf("%f",&t);
	printf("Enter rate of interest: ");
	scanf("%f",&r);
	a=p*pow(p*(1+r/100),t);
	ci=a-p;
	printf("compound interest is %f",ci);
	return 0;
}
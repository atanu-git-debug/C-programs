#include<stdio.h>
int main()
{
    int i,a,j,b;
    printf("Enter value of a: ");
    scanf("%d",&a);
    printf("Enter how many times want multiplie: ");
    scanf("%d",&j);
    for(i=0;i<j;i++)
    {
       b=a*a;
    }
    printf("Result=%d",b);
    return 0;
}
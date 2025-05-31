#include<stdio.h>
int main()
{
    int n,i,j,k;
    printf("Enter line number: ");
    scanf("%d",&n);
    k=n/2;
    for(i=0;i<k;i++){
        for(j=0;j<k;j++)
            printf("*\n");
        
    }
    return 0;
}
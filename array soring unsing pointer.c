#include<stdio.h>
int main()
{
   int a[10],*p,i,j,n,temp;
   printf("Enter number of element: ");
   scanf("%d",&n);
   p=a;
   printf("Enter elements of array: ");
   for(i=0;i<n;i++)
   {
      scanf("%d",p);
      p++;
    }
   p=a;
   for(i=0;i<n-1;i++) 
   {
     for(j=0;j<n-1-i;j++)
     {
        if(*(p+j)>*(p+j+1))
        {
            temp=*(p+j);
            *(p+j)=*(p+j+1);
            *(p+j+1)=temp;
        }
     }     
   }
   printf("sorted arraya:\n");
   for(i=0;i<n;i++)
   {
    printf("%d\n",a[i]);
   }
   return 0;
}    
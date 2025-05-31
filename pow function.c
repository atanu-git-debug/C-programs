#include<stdio.h>
void pow(int base, int power)
{
    int i,c,d;
    for(i=0;i<power;i++)
    {
        c=base*base;
    }
    printf("Answer is %d",c);

}
int main()
{
    int base, power;
    printf("Enetr the base: ");
    scanf("%d",&base);
    printf("Enter the power: ");
    scanf("%d",&power);
    pow(base,power);
}
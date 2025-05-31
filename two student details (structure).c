#include<stdio.h>

struct student
{
	int roll;
	char name[20];
};
int main ()
{
	struct student a,b;
	printf("Enter roll of the 1st student : ");
	scanf("%d",&a.roll);
	printf("Enter name of the 1st student: \n");
	scanf("%s",a.name);
	printf("Enter 2nd student`s roll :\n ");
	scanf("%d",&b.roll);
	printf("Enter the 2nd student`s name\n");
	scanf("%s",b.name);
	printf("1st student`s details is \n");
	printf("Roll=%d\t name : %s\n\n",a.roll,a.name);
	printf("2nd student`s details is\n");
	printf("Roll=%d\t name : %s",b.roll,b.name);
	return 0;
}
#include<stdio.h>
int main()
{
	int a,b,op;
	
	printf("Enter your 1st digit : ");
	scanf("%d",&a);
	
	printf("choose your operation for pluse-1,minus-2,multiplication-3,division-4 : ");
	scanf("%d",&op);
	
	printf("Enter your 2nd digit : ");
	scanf("%d",&b);
	
	
	switch(op)
	{
		case 1: {
				printf("%d",a+b);
		        break;
		    	}
		case 2: {printf("%d",a-b);
			     break;
		        }      
		case 3: {printf("%d",a*b);
			      break;
		        }
		case 4: {printf("%d",a/b);
			     break;
		        }
	 default:
	 			printf("Enter valid input");
	} 
	return 0;
	
}

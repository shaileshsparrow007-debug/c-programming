#include<stdio.h>
int main()
{
	int num1,num2;
	printf("enter first number:");
	scanf("%d",&num1);
	printf("enter second number:");
	scanf("%d",&num2);
	if(num1 < num2)
	{
	   printf("the smallest number is: %d\n",num1);
	   } else if (num2 < num1) 
	{
        printf("The smallest number is: %d\n", num2);
    } else
	 {
        printf("Both numbers are equal.\n");
    }
    return 0;
	}

#include <stdio.h> 
main() //%=+
{
	int choice, a,b;
	printf("enter your choice:");
	scanf("%d",&choice);
	printf("enter values of a and b:");
	scanf("%d %d",&a,&b);
	switch(choice)
	{
		case 1:
			printf("sum is: %d",a+b);
			break;
		case 2:
			printf("substraction is: %d",a-b);
			break;
		case 3:
			printf("multiplication is: %d", a*b);
		    break;
		case 4:
			printf("division is: %d",a/b);
			break;
		default:
			printf("wrong choice entered");
	}
}

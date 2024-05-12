#include <stdio.h> 
main() //%=+
{
	char choice;
	int a,b;
	printf("enter your choice:");
	scanf("%c",&choice);
	printf("enter values of a and b:");
	scanf("%d %d",&a,&b);
	switch(choice)
	{
		case 's':
			printf("sum is: %d",a+b);
			break;
		case '-':
			printf("substraction is: %d",a-b);
			break;
		case 'm':
			printf("multiplication is: %d", a*b);
		    break;
		case '/':
			printf("division is: %d",a/b);
			break;
		default:
			printf("wrong choice entered");
	}
}

#include <stdio.h>
main()
{
	int x1,x2,x3;
	printf("enter the value of x1 and x2:");
	scanf("%d %d",&x1,&x2); //taking two inputs in single scanf command
	x3= x1+x2;
	printf("the sum is: %d",x3); //two outputs in single printf command
	printf("\naddress of x1,x2 and x3 is :%p %p %p",&x1,&x2,&x3);
}

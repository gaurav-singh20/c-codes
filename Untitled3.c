#include <stdio.h>
main()
{
	int x1,x2,x3,x4,x5,x6;
	printf("enter the value of x1 and x2:");
	scanf("%d %d",&x1,&x2); //taking two inputs in single scanf command
	x3= x1+x2;
	x4= x1-x2;
	x5= x1*x2;
	x6= x1/x2;
	printf("the sum is: %d",x3); //two outputs in single printf command
	printf("\nthe substration is: %d",x4);
	printf("\nthe multiplication is: %d",x5);
	printf("\nthe division is: %d",x6);
	printf("\naddress of x1,x2,x3,x4,x5 and x6 is :%p %p %p %p %p %p",&x1,&x2,&x3);
}

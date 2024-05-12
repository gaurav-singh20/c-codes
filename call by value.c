#include <stdio.h>
void display(int x);
main()
{
	int x;
	printf("enter x:");
	scanf("%d",&x);
	printf("address of x:%p",&x);
	display(x); //function calling
	printf("\nvalue of x after change in display function: %d",x);
}
void display(int x)
{
	x=x+1;
	printf("\nvalue of x: %d",x);
	printf("\naddress of x:%p",&x);
	
}

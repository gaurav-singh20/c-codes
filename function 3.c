// function without return type and with parameter
#include <stdio.h>
void sum(int a,int b)
{
	printf("sum is: %d",a+b);
}

main()
{
	int x,y;
	printf("enter values of x and y:");
	scanf("%d %d",&x,&y);
	sum(x,y); //passing parameters
}

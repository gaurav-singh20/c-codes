// function with return type and with parameter
#include <stdio.h>
int sum(int a,int b)
{
	return a+b;
}

main()
{
	int x,y,z;
	printf("enter values of x and y:");
	scanf("%d %d",&x,&y);
	z=sum(x,y); //function call
	printf("sum is : %d",z);
}

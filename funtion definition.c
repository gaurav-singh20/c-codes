// "function datatype"--int,float,char--  "function name  (parameter or arguments)" --(int x, float y)--
// function declaration
// function definition
// funtion call
#include <stdio.h>
int sum(); // function declaration
main()
{
	int z;
	z=sum(); //function call
	printf("sum is : %d",z);
}

int sum() //funtion definition
{
	int x=3,y=4;
	return x+y;
}


//write a programe to find your percentage using user defind function
#include <stdio.h>
float per(); // function declaration
main()
{
	float z;
	z=per(); //function call
	printf("percentage is : %.2f",z);
}

float per() //funtion definition
{
	int x1,x2,x3;
	printf("enter marks 1:");
	scanf("%d",&x1);
	printf("enter marks 2:");
	scanf("%d",&x2);
	printf("enter marks 3:");
	scanf("%d",&x3);
	return (x1+x2+x3)/3;
}

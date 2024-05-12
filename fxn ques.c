//write a programe to print a table of any no. function without return type and with parameter 
//and another function to swap two no. without third variable with return type and with parameter
#include <stdio.h>

void table(int num) 
{
    for (int i = 1; i <= 10; i++) 
	{
        printf("%d x %d = %d\n", num, i, num * i);
    }
}

int sum(int a,int b,int temp)
{
	temp=a
	a=b
	b=temp
	return a,b;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    table(num);
}

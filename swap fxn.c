#include <stdio.h>
int swap(int a,int b)
{
	a=b,b=a;
}
main() 
{
    int a,b;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter a number: ");
    scanf("%d", &b);
    swap(a,b); //function call
	printf("swapped : %d %d",a,b);
}

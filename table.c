//write a programme to print a table of any number using a for loop
#include <stdio.h>
main()
{
	int num, i;
	printf("Enter a number: ");
    scanf("%d", &num);
    for (i = 1; i <= 10; i++) 
	{
        printf("%d x %d = %d\n", num, i, num * i);
    }
}


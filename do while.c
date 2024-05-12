#include <stdio.h>

main() 
{
    int num, i = 1;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("Multiplication table of %d:\n", num);
    
    do {
        printf("%d x %d = %d\n", num, i, num * i);
        i++;
    } while (i >= 10);
    
    return 0;
}

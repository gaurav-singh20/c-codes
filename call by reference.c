#include <stdio.h>
void main()
{
	int *a,b=3;
	a=&b; //copying address of b in a
	printf("value at address hold by a: %d",a);
}

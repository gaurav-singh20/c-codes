//entering array elements from user
// %=
#include <stdio.h>
void main()
{
	int regno[3],a;
	printf("ENTER ELEMENTS OF regno array: ");
	for(a=0;a<3;a++)
	scanf("%d",&regno[a]);
	printf("ELEMENTS OF THE ARRAY ARE: ");
	for(a=0;a<3;a++)
	printf("%d \n",regno[a]);
}

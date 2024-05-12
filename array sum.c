//array to add 10 numbers and display the sum
// %=
#include <stdio.h>
main()
{
	int numbers[10],a,sum=0;
	printf("ENTER ALL NUMBERS:");
	for(a=0;a<10;a++)
	scanf("%d",&numbers[a]);
	for(a=0;a<10;a++)
	sum=sum+numbers[a];
	printf("THE SUM IS: %d",&sum);
}

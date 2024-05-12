// =%^
#include <stdio.h>
#include <stdlib.h>
main() 
{
	//int*ptr=(int*)malloc(5*sizeof(int));
	int *p,x;
	p=(int*)malloc(20);
	printf("ADRESS OF p: %p",&p);
	printf("\n ADRESS hold by p: %p",p);
	for(x=0;x<5;x++)
	{
		printf("\nENTER %d element: ",x+1);
		scanf("%d",p+x);
		printf("\nvalue at pt3 is %d",*(p+3));
	}
}

// %^=
#include<stdio.h>
main()
{
	int x,y, *px, *py,z, *pz;
	printf("Enter values of x and y: ");
	scanf("%d%d",&x,&y);
	px=&x;
	py=&y;
	pz=&z;
	*pz = *px + *py;
	printf("SUM IS :%d",*pz);
}

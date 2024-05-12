// =%^
#include <stdio.h>

main() 
{
	int *p,sub[5],x,*px,ta=0,*tap;
	for(x=0;x<5;x++)
	{
		printf("ENTER %d SUBJECT ATTENDANCE:",x+1);
		scanf("%d",&sub[x]);
	}
	p=sub;
	tap=&ta;
	for(x=0;x<5;x++)
	{
		printf("\nSUBJECT %d ATTENDANCE IS: %d\n",x+1,*(p+x));
		*tap=*tap + *(p+x);
	}
	printf("TOTAL ATTENDACE IS: %d",(*tap/5));
}

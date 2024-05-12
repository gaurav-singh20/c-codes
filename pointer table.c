// %^=
#include<stdio.h>
main()
{
	int x,y, *px, *py;
	printf("Enter the number for table: ");
	scanf("%d",&x);
	px=&x;
	py=&y;
	for(*py=1;*py<11;*py+=1)
	{
		printf("%d x %d = %d\n",*px,*py,(*px*(*py)));
	}
}

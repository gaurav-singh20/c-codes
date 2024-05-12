// %=
#include <stdio.h>
void main()
{
	int a;
	char sname[5][100];
	printf("ENTER NAMES: ");
	for(a=0;a<5;a++)
	{
		fflush(stdin);
		gets(sname[a]);
	}
	printf("ENTERED NAMES ARE: ");
	for(a=0;a<5;a++)
	{
		fflush(stdin);
		puts(sname[a]);
	}
}

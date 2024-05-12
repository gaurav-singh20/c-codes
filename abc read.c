// %=
#include<stdio.h>
main()
{
	FILE *f1;
	f1=fopen("abc.txt","r");
	char name;
	int regno;
	name=getc(f1);
	printf("\n Name is:");
	printf("%c",name);
	
	regno=getw(f1);
	printf("\n Reg no.:");
	printf("%d",regno);
	fclose(f1);
}

// %=
#include<stdio.h>
main()
{
	FILE *f1;
	f1=fopen("xyz.txt","r");
	char a;
	int b;
	a=getc(f1);
	printf("\n The letter or character in xyz file");
	printf("%c",a);
	
	b=getw(f1);
	printf("\n The single digit in xyz file is:");
	printf("%d",b);
	fclose(f1);
}

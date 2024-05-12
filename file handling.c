// %=
#include<stdio.h>
main()
{
	FILE *f1;
	f1=fopen("xyz.txt","w");
	char a;
	int b;
	printf("Enter any letter or character from a to z");
	scanf("%c",&a);
	putc(a,f1); //write single character
	printf("Enter a single digit:");
	scanf("%d",&b);
	putw(b,f1); //write integer in the file
	fclose(f1);
}

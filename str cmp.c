// %=^
#include<stdio.h>
#include<string.h>
main()
{
	char name[25],name2[25];
	int c;
	int n;
	printf("Enter name:");
	gets(name);
	printf("Enter name2: ");
	gets(name2);
	c=(strcmp(name,name2));
	if(c==0)
	printf("Strings are similar");
	else
	printf("not similar");
}

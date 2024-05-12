// %=
#include<stdio.h>
main()
{
	FILE *f1;
	f1=fopen("abc.txt","w");
	char name[10];
	int regno;
	printf("Enter the name:");
	gets(name);
	printf("Enter the registration no:");
	scanf("%d",&regno);
}

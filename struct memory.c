#include<stdio.h>
struct details
{
	int a;
	float b;
	char c;
}d;
main()
{
	printf("ENTER a: ");
	scanf("%d",&d.a);
	printf("ENTER b: ");
	scanf("%f",&d.b);
	printf("ENTER c: ");
	fflush(stdin);
	scanf("%c",&d.c);
	printf("SIZE OF a: %d",sizeof(d));
}

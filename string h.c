// %=^
#include<stdio.h>
#include<string.h>
main()
{
	char name[25];
	int l;
	printf("Enter NAME:");
	scanf("%[^\n]s",&name);
	l=strlen(name);
	printf("THE LENGTH OF ENTERED NAME IS: %d \n",l);
//	strrev(name);
//	printf("Now the reverses name is: %s\n",name);
	strupr(name);
	printf("Now the name is in uppercase: %s\n",name);
	strlwr(name);
	printf("Now the name is in lowercase: %s\n",name);
}

// %=^
#include<stdio.h>
#include<string.h>
main()
{
	char name[25],name2[25],name3[25];
	int n;
	printf("Enter name:");
	scanf("%[^\n]s",&name);
	strcpy(name2,name);
	printf("\nThe CONTENT in name2 is: %s",name2);
	strncpy(name3,name,4);
	name2[4]=NULL;
	printf("\nThe CONTENT in name3 is: %s",name3);
	strcat(name,name3);
	printf("\nThe CONTENT in name3 is: %s",name);
	
}

//write a programe to enter student name and address and cgpa, registration no., roll no.
#include <stdio.h>
main()
{
	long long int reg,rn;
	float cgpa;
	char ad[50],name[20];
	printf("enter the name:");
	gets(name);
	printf("entererd name is:");
	puts(name);
	
	printf("enter the address:");
	gets(ad);
	printf("entererd address is:");
	puts(ad);
	
	printf("enter the roll no.:");
	scanf("%d",&rn);
	printf("entered roll no. is: %d",rn);
	
	printf("\nenter the registration no.:");
	scanf("%d",&reg);
	printf("entered registration no. is: %d",reg);
	
	printf("\nenter the cgpa:");
	scanf("%f",&cgpa);
	printf("entered cgpa is: %.3f",cgpa);
}

//pointer to structure
#include<stdio.h>
// %=
struct student
{
	int rn; //DATA MEMBERS OF STRUCTURE
	float cgpa;
}s1,*s2; //s2 is a pointer 
main()
{
	s2=&s1;
	printf("ENTER REG NO:");
	scanf("%d",&(*s2).rn);
	printf("ENTER CGPA:");
	scanf("%f",&(*s2).cgpa);
	printf("THE REG NO. IS = %d AND CGPA IS =%f",s2->rn,(*s2).cgpa);
}

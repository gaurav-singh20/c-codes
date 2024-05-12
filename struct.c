#include<stdio.h>
// %=
struct student
{
	int rn;
	float cgpa;
	char grade;
	char name[50];
}s,s3;
student s2,s4;	   //s is object of the structure student.
main()
{
	
	printf("ENTER REG. NO.: ");
	scanf("%d",&s.rn);
	printf("ENTER CGPA: ");
	scanf("%f",&s.cgpa);
	printf("ENTER GRADE: ");
	fflush(stdin);
	scanf("%c",&s.grade);
	printf("ENTER NAME: ");
	fflush(stdin);
	gets(s.name);
	printf("THE ADDRESS OF s IS: %p",&s);
	printf("THE RECORD OF STUDENT IS: \n");
	printf("%d\n%f\n%c\n",s.rn,s.cgpa,s.grade);
	puts(s.name);
}

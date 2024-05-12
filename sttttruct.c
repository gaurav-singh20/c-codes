#include<stdio.h>
// %=
struct student
{
	int rn; //DATA MEMBERS OF STRUCTURE
	float cgpa;
	char grade;
	char name[100];
	struct stud_per
	{
		int mobno;
	}sp;
}s1[3],s3[3]; //s1,s3 are object of structure student
struct student s2,s4; //s2,s4 are also an object of structure student
main()
{
	int x;
	for(x=0;x<2;x++)
	{
		printf("ENTER REG NO OF STUDENT %d:",x+1);
		scanf("%d",&s1[x].rn);
		printf("ENTER CGPA OF STUDENT %d:",x+1);
		scanf("%f",&s1[x].cgpa);
		printf("ENTER GRADE OF STUDENT %d:",x+1);
		fflush(stdin);
		scanf("%c",&s1[x].grade);
		printf("ENTER MOBILE NO:",x+1);
		scanf("%d",s1[x].sp.mobno);
		printf("ENTER NAME OF STUDENT %d:",x+1);
		fflush(stdin);
		gets(s1[x].name);
		printf("\n\n");
	}
	for(x=0;x<2;x++)
	{
		printf("THE DETAILS OF STUDENT %d:",x+1);
		s3[x]=s1[x];
		printf("%d\n%f\n%c\t%d",s3[x].rn,s3[x].cgpa,s3[x].grade,s1[x].sp.mobno);
		puts(s3[x].name);
		printf("\n");	
	}
	printf("MEMORY TAKEN BY OBJECT s1:%d \n",sizeof(s1));
	printf("MEMORY TAKEN BY OBJECT s3:%d",sizeof(s3));
}

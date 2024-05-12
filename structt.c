#include<stdio.h>
// %=
struct student
{
	int rn[5]; //DATA MEMBERS OF STRUCTURE
	float cgpa[5];
	char grade[5];
	char name[5][100];
}s1,s3; //s1,s3 are object of structure student
struct student s2,s4; //s2,s4 are also an object of structure student
main()
{
	int x;
	for(x=0;x<2;x++)
	{
		printf("ENTER REG NO OF STUDENT %d:",x+1);
		scanf("%d",&s1.rn[x]);
		printf("ENTER CGPA OF STUDENT %d:",x+1);
		scanf("%f",&s1.cgpa[x]);
		printf("ENTER GRADE OF STUDENT %d:",x+1);
		fflush(stdin);
		scanf("%c",&s1.grade[x]);
		printf("ENTER NAME OF STUDENT %d:",x+1);
		fflush(stdin);
		gets(s1.name[x]);
		printf("\n\n");
	}
	for(x=0;x<2;x++)
	{
		printf("THE DETAILS OF STUDENT %d:",x+1);
		printf("%d\n%f\n%c",s1.rn[x],s1.cgpa[x],s1.grade[x]);
		puts(s1.name[x]);
		printf("\n");	
	}
	printf("MEMORY TAKEN BY OBJECT s1:%d \n",sizeof(s1));
	printf("MEMORY TAKEN BY OBJECT s1:%d",sizeof(s2));
}

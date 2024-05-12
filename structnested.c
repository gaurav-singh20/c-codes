#include<stdio.h>
// %=
struct student
{
	int rn;
	int mn[5];
	struct student2
	{
		float cgpa;
	}st2;
}s1,s2,s3[5],*s4;
main()
{
	int x;
	printf("ENTER REG NO OF STUDENT:");
	scanf("%d",&s1.rn);
	for(x=0;x<3;x++)
	{
		printf("ENTER MN OF STUDENT %d:",x+1);
		scanf("%d",&s1.mn[x]);
	}
	printf("ENTER CGPA OF STUDENT %d:",x+1);
	scanf("%f",&s1.st2.cgpa);
	for(x=0;x<3;x++)
	{
		printf("ENTER %d REG NO:",x+1);
		scanf("%d",&s3[x].rn);
	}
	s2=s1;
	s4=&s2;
	printf("ENTER REG NO.");
	scanf("%d",&(*s4).rn);
	printf("REG NO IS: %d \n",(*s4).rn);
	printf("REG NO. IS %d \n",s4->rn);
	printf("MEMORY TAKEN BY OBJECT s1:%d \n",sizeof(s1));
	printf("MEMORY TAKEN BY OBJECT s2:%d \n",sizeof(s2));
	printf("MEMORY TAKEN BY OBJECT s3:%d \n",sizeof(s3));
}

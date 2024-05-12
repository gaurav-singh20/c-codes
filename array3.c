//create 3 arrays and enter regno,cgpa and grades of 5 students
// %=
#include <stdio.h>
void main()
{
	int regno[5],a,b,c;
	float cgpa[5];
	char grades[5];
	printf("ENTER THE REGISTRATION NUMBERS: ");
	for(a=0;a<5;a++)
	scanf("%d",&regno[a]);
	printf("ENTER THE CGPA OF THE STUDENTS: ");
	for (b=0;b<5;b++)
	scanf("%f",&cgpa[b]);
	printf("ENTER THE GRADES: ");
	for(c=0;c<5;c++){
	fflush(stdin);
	scanf("%c",&grades[c]); //or grade[a]=getchar();
    }
	printf("ENTERED REGISTRATION NUMBERS ARE: ");
	for(a=0;a<5;a++)
	printf("%d \n",regno[a]);
	printf("CGPAs OF THE STUDENTS: ");
	for (a=0;a<5;a++)
	printf("%f \n",cgpa[a]);
	printf("THE GRADES ARE: ");
	for(a=0;a<5;a++)
	printf("%c \n",grades[a]);//viewing them
	printf("ENTERED REGISTRATION NUMBERS ARE: ");
	for(a=0;a<5;a++)
	printf("%d \n",regno[a]);
	printf("CGPAs OF THE STUDENTS: ");
	for (a=0;a<5;a++)
	printf("%f \n",cgpa[a]);
	printf("THE GRADES ARE: ");
	for(a=0;a<5;a++)
	printf("%c \n",grades[a]);
}

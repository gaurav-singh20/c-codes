//nested structure
#include<stdio.h>
// _%=
struct stud_acad
{
	int rn; //DATA MEMBERS OF STRUCTURE
	struct stud_per
	{
		int mobno;
	}sp;
}sa;
main()
{
	printf("ENTER REG NO:");
	scanf("%d",sa.rn);
	printf("ENTER MOBILE NO:");
	scanf("%d",sa.sp.mobno);
	printf("STUDENT ACADEMIC AND PERSONAL DETAILS ARE:");
	printf("%d\t%d",sa.rn,sa.sp.mobno);
}

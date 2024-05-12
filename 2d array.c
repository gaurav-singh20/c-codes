//2 DIMENSIONAL ARRAY
// %=
#include<stdio.h>

main(){
	int arr[2][3],a,b;
	printf("ENTER ARRAY ELEMENT:");
	for (a=0;a<2;a++) //for rows
	{
		for(b=0;b<3;b++) //for columns
		{
			scanf("%d",&arr[a][b]);
		}
	}
	printf("THE ARRAY ELEMENTS ARE:");
	for (a=0;a<2;a++) //for rows
	{
		printf("\n");
		for(b=0;b<3;b++) //for columns
		{
			printf("%d",arr[a][b]);
		}
	}
	
}


#include<stdio.h>

main(){
	char arr[2][3];
	int a,b;
	printf("ENTER ARRAY ELEMENT:");
	for (a=0;a<2;a++) //for rows
	{
		for(b=0;b<3;b++) //for columns
		{
			fflush(stdin);
			scanf("%c",&arr[a][b]);
		}
	}
	printf("THE ARRAY ELEMENTS ARE:");
	for(a=0;a<2;a++){
        printf("%c", arr[a][b]);
    }
	
}

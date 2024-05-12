// %=
#include <stdio.h>
main()
{
	int arr[5],a,se; 
	printf("ENTER THE NUMBERS:");
	for(a=0;a<5;a++)
	scanf("%d",&arr[a]);
	printf("ENTER THE NUMBER:");
	scanf("%d",&se);
	for (a = 0; a < 5; a++) {
        if (se == arr[a])
        	break;
    if(se!= arr[a])
        printf("not present");
    }
}

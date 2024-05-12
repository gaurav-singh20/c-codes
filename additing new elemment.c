// %=
#include <stdio.h>
main()
{
	int arr[11],a,ne,pos;
	printf("ENTER THE ARRAY ELEMENTS:");
	for(a=0;a<10;a++)
	scanf("%d",&arr[a]);
	printf("ENTER THE ELEMENT TO ADD:");
	scanf("%d",&ne);
	printf("ENTER THE POSITION:");
	scanf("%d",&pos);
	for (a = 9; a >= pos; a--) {
        arr[a+1] = arr[a];
    }
    arr[pos] = ne;
    printf("The array after inserting %d at position %d:\n", ne, pos);
    for (a = 0; a < 11; a++) {
        printf("%d ", arr[a]);
    }
}

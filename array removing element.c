// %=
#include <stdio.h>
main()
{
	int arr[10],a,pos;
	printf("ENTER THE ARRAY ELEMENTS:");
	for(a=0;a<10;a++)
	scanf("%d",&arr[a]);
	printf("ENTER THE POSITION TO REMOVE ELEMENT:");
	scanf("%d",&pos);
	for(a = pos; a < 9; a++) {
    arr[a] = arr[a + 1];
  }
    printf("The array after removing is:\n");
    for (a = 0; a < 9; a++) {
        printf("%d ", arr[a]);
    }
}


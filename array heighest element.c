// %=
#include <stdio.h>
main()
{
	int arr[10],a,he,le; //he- heighest element
	printf("ENTER THE NUMBERS:");
	for(a=0;a<10;a++)
	scanf("%d",&arr[a]);
	he= arr[0];
	le= arr[0];
	for (a = 1; a < 10; a++) {
        if (arr[a] > he) {
            he = arr[a];
        }
    }
    for (a = 1; a < 10; a++) {
        if (arr[a] < le) {
            le = arr[a];
        }
    }
	printf("HEIGHEST ELEMENT IS: %d",he);
	printf("\nLOWEST ELEMENT IS: %d",le);
}

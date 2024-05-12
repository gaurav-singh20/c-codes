// %=
#include <stdio.h>
main()
{
	int arr[10],a,se,mi,fi=0,li;
	printf("ENTER THE ARRAY ELEMENTS:");
	for(a=0;a<10;a++)
	scanf("%d",&arr[a]);
	printf("ENTER ELEMENT TO SEARCH:");
	scanf("%d",&se);
	fi=0;
	li=9;
	for(a=0;a<10;a++){
		mi=(fi+li)/2;
		if(arr[mi]==se){
			printf("\nELEMENT IS AT INDEX: %d",mi);
			break;
		}
		else if(arr[mi]>se){
			li=mi-1;
		}
		else{
			fi=mi+1;
		}
	}
}
			

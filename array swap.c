#include<stdio.h>

int main(){
    int arr[5],a ,b, swap, swap1=0, pass1, test;
    printf("Enter the elements: ");
    for(a=0;a<5;a++){
        scanf("%d", &arr[a]);
    }
    for(a=0;a<5;a++){
        test = 0;
        for(b=0;b<4;b++){
            if(arr[b]>arr[b+1]){
                test++;
                swap1++;
                swap=arr[b+1];
                arr[b+1]=arr[b];
                arr[b]=swap;
            }
        }
        if(test!=0){
            pass1++;
        }
        else{
            break;
        }
    }
    printf("The number of swaps %d\n", swap1);
    printf("The number of passes %d\n", pass1);
    printf("THE SORTED ARRAY IS ");
    for(a=0;a<5;a++){
        printf("%d ", arr[a]);
    }
}

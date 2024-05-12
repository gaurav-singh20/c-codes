// %=^
#include <stdio.h>
#include <string.h>

main() 
{
    char name[100];
    int i, j, len, countl=0, countu=0;
    printf("Enter a string: ");
    gets(name);
    len = strlen(name);
    printf("Vowels in the string: ");
    for(i=0; i<len; i++) { //or instead of using len, we can simply use for(x=0,name[i]!='\0',i++)
        if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u'){
        	countl++;
            printf("%c", name[i]);
        }
    }
    if(countl>5){
    	for(j=0; j<len; j++) { //or instead of using len, we can simply use for(x=0,name[i]!='\0',i++)
        if(name[j]=='A'||name[j]=='E'||name[j]=='I'||name[j]=='O'||name[j]=='U') {
        	countu++;
            printf("%c", name[j]);
        }
    }
	};
    printf("\nnumber of vowels are:");
	printf("lower:%d\n", countl);
	printf("upper:%d", countu);
    return 0;
}

// %=^
#include <stdio.h>
#include <string.h>

main() 
{
    char name[100];
    int i, len, count=0;
    printf("Enter a string: ");
    gets(name);
    len = strlen(name);
    printf("Vowels in the string: ");
    for(i=0; i<len; i++) { //or instead of using len, we can simply use for(x=0,name[i]!='\0',i++)
        if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u'||name[i]=='A'||name[i]=='E'||name[i]=='I'||name[i]=='O'||name[i]=='U') {
        	count++;
            printf("%c", name[i]);
        }
    }
    printf("\nnumber of vowels are:");
	printf("%d", count);
    return 0;
}

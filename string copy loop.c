#include <stdio.h>
#include <string.h>
int main() {
    char name[100];
    char namerev[100] = "";
    int i, len;
    printf("Enter a string: ");
    gets(name);
    len = strlen(name);
    for(i=0; i<len; i++) {
        namerev[i] = name[i];
    }
    printf("copied string: %s\n", namerev);
    return 0;
}



#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    char namerev[100] = "";
    int i, len;
    printf("Enter a string: ");
    gets(name);
    len = strlen(name);
    for(i=len-1; i>=0; i--) {
        namerev[len-1-i] = name[i];
    }
    printf("reverse string: %s\n", namerev);
    return 0;
}



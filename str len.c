#include <stdio.h>

int main() {
    char name[25];
    int length = 0;
    printf("Enter name:");
	gets(name);
    while (name[length] != '\0') {
        length++;
    }
    printf("The length of the name is %d\n", length);
}


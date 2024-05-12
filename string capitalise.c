//write a progrme in which ewe entered our string in lower case like name then only convert the strings 1st char/letter into the upper case and after space if there are more then one word, the other word alwso should be  the capital letter.
// %=^
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);
    int i = 0;
    while(str[i]) {
        if(str[i]==" ") {
            str[i-1] = strupr(str[i-1]);
        }
        i++;
    }
    printf("Capitalized string: %s", str);
    return 0;
}


//write a program in c in which take total attendance of a student as an input and find a pecentage of aggregate attendace
//if the percentage is greater equals to 75,you are allowed to sit in exam otherwise not.
//use only pointers.no variables allowed

#include <stdio.h>

int main() {
    int tc, ac;
    int *ptc = &tc;
    int *pac = &ac;

    printf("ENTER TOTAL NO. OF CLASSES: ");
    scanf("%d", ptc);

    printf("ENTER TOTAL NO. OF ATTENDED CLASSES: ");
    scanf("%d", pac);

    float per = ((float)*pac / (float)*ptc) * 100.0;

    printf("YOUR ATTENDANCE IS: %.2f \n",per);
	if (per >= 75.0) {
        printf("ALLOWED\n");
    } else {
        printf("NOT ALLOWED\n");
    }
}

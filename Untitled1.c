#include <stdio.h> 
main() //%=+
{
int regno;
printf("enter registration number:");
scanf("%d",& regno);
printf("the registrastion no is: "); //printf here is used to displa the message
printf("%d",regno); //printf here is used to display the output value
printf("\nthe address of regno is:"); 
printf("%p",&regno); //%p here is for the hexadecimal value
}

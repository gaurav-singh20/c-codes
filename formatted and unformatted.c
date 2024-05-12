#include<stdio.h>
void main()
{
	char choice;
	printf("enter your choice: ");
	//scanf("%c",&choice);
	choice=getchar(); //taking input with unformatted function
	printf("enterred choice is: ");
	//printf("%c",choice); //taking output as formatted function
	putchar(choice); //taking output as formatted function
	
	printf("\nenter your choice: ");
	choice=getche();
	printf("\nenterred choice is: ");
	putche(choice);
	
	printf("\nenter your choice: ");
	choice=getch();
	printf("\nenterred choice is: ");
	putch(choice);
	
}


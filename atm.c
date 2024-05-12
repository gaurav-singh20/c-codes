//write a programe using switch case statement in which we have to implement the atm machine
//first case is to display the account balance
//second case is to withdraw the money
//third case is to change the pin
//fourth case is to transfer to another account
//fifth is the default case
#include <stdio.h>
main()
{
	long long int an,oan;
    int pin=1234,epin,choice;
	float ab,aw,at;
    printf("Enter the account no.:");
    scanf("%11i", &an);
    printf("enter account balance:");
    scanf("%f",&ab);
    printf("enter your pin now: ");
    scanf("%d",&epin);
    if(epin==pin)
    {
    	printf("press 1 to display account balance: \n");
    	printf("press 2 to withdraw money: \n");
    	printf("press 3 to transfer to another account: \n");
    	printf("press 4 to display account balance: \n");
    	scanf("%d", &choice);
    	switch(choice)
    	{
    		case 1:
    			printf("account no. is: %11i\n",an);
    			break;
    		case 2:
    			printf("enter the ammount to withdraw: ");
    			scanf("%d",&aw);
    			printf("--please collect the money--");
    			break;
    		case 3:
    			printf("\nEnter the account number you want to transfer to: ");
            	scanf("%d", &oan);
            	printf("Enter the amount you want to transfer: ");
            	scanf("%d", &at);
            	break;
            case 4:
            	printf("account balance is: %f",ab);
            	break;
            default: 
            	printf("\nInvalid choice! Please try again.\n");
            	break;
		}
	}

}

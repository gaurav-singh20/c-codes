#include <stdio.h>
#include <string.h>

typedef struct {
    char brand[20];
    char model[20];
    int serial_no;
    char repair_status[20];
    float repair_cost;
} Laptop;

Laptop laptops[100];
int num_laptops = 0;

void add_laptop() {
    Laptop new_laptop;
    printf("Enter brand name: ");
    scanf("%s", new_laptop.brand);
    printf("Enter model name: ");
    scanf("%s", new_laptop.model);
    printf("Enter serial number: ");
    scanf("%d", &new_laptop.serial_no);
    printf("Enter repair status: ");
    scanf("%s", new_laptop.repair_status);
    printf("Enter repair cost: ");
    scanf("%f", &new_laptop.repair_cost);
    laptops[num_laptops++] = new_laptop;
    printf("Laptop added successfully!\n");
}

void update_status() {
    int serial_no;
    printf("Enter serial number of laptop to update: ");
    scanf("%d", &serial_no);
    int i;
    for (i = 0; i < num_laptops; i++) {
        if (laptops[i].serial_no == serial_no) {
            printf("Enter new repair status: ");
            scanf("%s", laptops[i].repair_status);
            printf("Repair status updated successfully!\n");
            return;
        }
    }
    printf("Laptop not found!\n");
}

void generate_bill() {
    int serial_no;
    printf("Enter serial number of laptop: ");
    scanf("%d", &serial_no);
    int i;
    for (i = 0; i < num_laptops; i++) {
        if (laptops[i].serial_no == serial_no) {
            printf("Brand name: %s\n", laptops[i].brand);
            printf("Model name: %s\n", laptops[i].model);
            printf("Repair cost: $%.2f\n", laptops[i].repair_cost);
            return;
        }
    }
    printf("Laptop not found!\n");
}

void search_laptops() {
    char search_str[20];
    printf("Enter search string: ");
    scanf("%s", search_str);
    int i;
    for (i = 0; i < num_laptops; i++) {
        if (strcmp(laptops[i].brand, search_str) == 0 || strcmp(laptops[i].repair_status, search_str) == 0) {
            printf("Brand name: %s\n", laptops[i].brand);
            printf("Model name: %s\n", laptops[i].model);
            printf("Serial number: %d\n", laptops[i].serial_no);
            printf("Repair status: %s\n", laptops[i].repair_status);
            printf("Repair cost: $%.2f\n", laptops[i].repair_cost);
        }
    }
}

void display_laptops() {
    int i;
    for (i = 0; i < num_laptops; i++) {
        printf("Brand name: %s\n", laptops[i].brand);
        printf("Model name: %s\n", laptops[i].model);
        printf("Serial number: %d\n", laptops[i].serial_no);
        printf("Repair status: %s\n", laptops[i].repair_status);
        printf("Repair cost: $%.2f\n", laptops[i].repair_cost);
    }
}

int main() 
{
    int choice;
    do 
	{
        printf("\nLaptop Repairing System\n");
        printf("-----------------------\n");
        printf("1. Add a new laptop\n");
        printf("2. Update repair status of a laptop\n");
    	printf("3. Generate repair bill\n");
    	printf("4. Search for laptops\n");
    	printf("5. Display all laptops\n");
    	printf("6. Exit\n");
    	printf("Enter your choice: ");
    	scanf("%d", &choice);
    	switch (choice) 
		{
        	case 1:
            	add_laptop();
            	break;
        	case 2:
            	update_status();
            	break;
        	case 3:
            	generate_bill();
            	break;
        	case 4:
            	search_laptops();
            	break;
        	case 5:
            	display_laptops();
            	break;
        	case 6:
            	printf("Exiting...");
            	break;
        	default:
            	printf("Invalid choice! Please enter a valid choice.\n");
        }
	}
 while (choice != 6);
return 0;
}
       


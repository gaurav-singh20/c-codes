#include <stdio.h>

int main() {
    float radius, length, width, temperature, result;
    int choice;

    printf("Choose an option:\n");
    printf("1. Calculate the area of a circle\n");
    printf("2. Calculate the circumference of a circle\n");
    printf("3. Calculate the area of a rectangle\n");
    printf("4. Convert temperature from Celsius to Fahrenheit\n");
    printf("5. Convert temperature from Fahrenheit to Celsius\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter the radius of the circle: ");
            scanf("%f", &radius);
            result = 3.14 * radius * radius;
            printf("The area of the circle is %.2f\n", result);
            break;
        case 2:
            printf("Enter the radius of the circle: ");
            scanf("%f", &radius);
            result = 2 * 3.14 * radius;
            printf("The circumference of the circle is %.2f\n", result);
            break;
        case 3:
            printf("Enter the length of the rectangle: ");
            scanf("%f", &length);
            printf("Enter the width of the rectangle: ");
            scanf("%f", &width);
            result = length * width;
            printf("The area of the rectangle is %.2f\n", result);
            break;
        case 4:
            printf("Enter the temperature in Celsius: ");
            scanf("%f", &temperature);
            result = (temperature * 9/5) + 32;
            printf("%.2f Celsius is equivalent to %.2f Fahrenheit\n", temperature, result);
            break;
        case 5:
            printf("Enter the temperature in Fahrenheit: ");
            scanf("%f", &temperature);
            result = (temperature - 32) * 5/9;
            printf("%.2f Fahrenheit is equivalent to %.2f Celsius\n", temperature, result);
            break;
        default:
            printf("Invalid choice\n");
            break;
    }

}

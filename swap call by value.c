//swapping of two numbers without using third variable without return type with parameters by call by value
void swap(int* a, int* b) 
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}
main()
{
int x,y;
printf("Enter a number: ");
scanf("%d", &x);
printf("Enter a number: ");
scanf("%d", &y);
printf("Before swap: x = %d, y = %d\n", x, y);
swap(&x, &y);
printf("After swap: x = %d, y = %d\n", x, y);
}

#include <stdio.h>
int main()
{
    int no1, no2;
    printf("Enter the first number :");
    scanf("%d", &no1);
    printf("Enter the second number :");
    scanf("%d", &no2);

    no1 = no1 + no2;
    no2 = no1 - no2;
    no1 = no1 - no2;

    printf("After swapping the number each other \n ");

    printf("First number is %d \n", no1);
    printf("Second number is %d", no2);

    return 0;
}
#include <stdio.h>
int main()
{
    int a, b, c, temp;
    printf("Enter the First number :");
    scanf("%d", &a);
    printf("Enter the second number :");
    scanf("%d", &b);
    printf("Enter the third number :");
    scanf("%d", &c);

    a = a + b + c;
    b = a - b - c;
    c = a - b - c;
    a = a - b - c;

    printf("Ater swapping the number \n");
    printf("First number is %d \n", a);
    printf("Second number is %d \n", b);
    printf("Third number is %d \n", c);

    return 0;
}
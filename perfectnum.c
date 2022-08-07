#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    printf("Enter a number :");
    scanf("%d", &n);

    for (i = 1; i <= n / 2; i++)
        if (n % i == 0)
        {
            sum = sum + i;
        }
    if (n == sum)
    {
        printf("Its a perfect number ");
    }
    else
    {
        printf("Its not a perfect number");
    }
    return 0;
}
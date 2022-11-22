#include <stdio.h>
int main()
{
    int n, r, sum = 0, temp;
    printf("Enter a number :");
    scanf("%d", &n);
    temp = n;
    while (n != 0)
    {
        r = n % 10;
        sum = sum * 10 + r;
        n = n / 10;
    }

    if (sum == temp)
    {
        printf("The reverse or Palindrome no is =%d \n", temp);
        printf("Its a Palindrome number");
    }
    else
    {
        printf("Not a palindrome number");
    }
    return 0;
}
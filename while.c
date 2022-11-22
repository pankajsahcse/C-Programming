#include <stdio.h>

int main()
{
    int i = 0,no;
    printf("Enter a value :");
    scanf("%d", &no);

    while(i <= no)
    {
        printf("%d \n", i);
        i = i + 1;
    }

    return 0;
}
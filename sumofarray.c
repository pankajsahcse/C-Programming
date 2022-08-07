#include <stdio.h>
int main()
{
    int arr[100], sum = 0, size, i;
    printf("Enter the arraysize :");
    scanf("%d", &size);

    printf("enter array element :");
    for (i = 0; i < size; i++)

        scanf("%d", &arr[i]);
    for (i = 0; i < size; i++)
        sum = sum + arr[i];

    printf("Sum of the array are %d", sum);

    return 0;
}
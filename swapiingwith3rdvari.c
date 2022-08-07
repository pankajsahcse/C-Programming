#include<stdio.h>
int main (){
    int no1,no2,temp;
    printf("Enter the first number :");
    scanf("%d", &no1);
    printf("Enter the second number :");
    scanf("%d", &no2);

    temp=no1;
    no1=no2;
    no2=temp;

    printf("After swaping the number \n");
    printf("First no is %d \n", no1);
    printf("Second no is %d", no2);

    return 0;
}
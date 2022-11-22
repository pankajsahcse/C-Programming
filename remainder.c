#include<stdio.h>
int main(){
    int no;
    printf("Enter a number :");
    scanf("%d", &no);

    int s = no%10;
    printf("%d", s);

    return 0;
}
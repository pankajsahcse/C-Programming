#include<stdio.h>
// for addition program
void myaddition(){
    int a,b,c;
    printf("Enter the first number :");
    scanf("%d", &a);
    printf("Enter the second number :");
    scanf("%d", &b);
    c=a+b;
    printf("Sum of the two number are %d ", c);
}

// for subtraction program
void mysubtraction(){
int a,b,c;
    printf(" \n Enter the first number :");
    scanf("%d", &a);
    printf("Enter the second number :");
    scanf("%d", &b);
    c=a-b;
    printf("Subtraction of the two number are %d \n", c);
}

// for multiplying program
void mymultiplication(){
int a,b,c;
    printf("Enter the first number :");
    scanf("%d", &a);
    printf("Enter the second number :");
    scanf("%d", &b);
    c=a*b;
    printf("Multiplication of the two number are %d \n", c);
}


// for dividing program
void mydividing(){
int a,b,c;
    printf("Enter the first number :");
    scanf("%d", &a);
    printf("Enter the second number :");
    scanf("%d", &b);
    c=a/b;
    printf("Dividing of the two number are %d", c);
}

int main (){
    myaddition();
    mysubtraction();
    mymultiplication();
    mydividing();

    return 0;
}
#include<stdio.h>
// for addition program
void myaddition(){
    int a,b,c;
    printf("Enter the first number :");
    scanf("%d", &a);
    printf("Enter the second number :");
    scanf("%d", &b);
    c=a+b;
    printf("Sum of the two number are %d /n", c);
}

// for subtraction program
void mysubtraction(){
int a,b,c;
    printf("Enter the first number :");
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

int main(){
   int choice,c ;
   printf("For addition Please enter :1 \n");
   printf("For substraction Please enter :2 \n");
   printf("For multiplication Please enter :3\n");
   printf("For dividing Please enter :4 \n");



   printf("Enter your choice :");
   scanf("%d", &choice);

   switch (choice)
   {
   case 1:
        Addition
        printf("Sum of the two number is :%d", c);
       break;

       case 2:
       Substraction
        printf("Subtraction of the two number is :%d", c);
       break;

       case 3:
       multiplication
        printf("Multiplication of the two number is :%d", c);
       break;

       case 4:
       dividing
        printf("Dividing of the two number is :%d", c);
       

   
   default:
       break;
   }
}








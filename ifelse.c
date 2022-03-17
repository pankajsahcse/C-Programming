#include <stdio.h>

int main() {
 int number1,number2;
 printf("Enter the first number :");
 scanf("%d", &number1);
 
 printf("Enter the second number :");
 scanf("%d", &number2);
 
 if( number1>number2){
     
     printf("First number is greater");
     
 }
 else{
     printf("second number is greater");
 }
 
    return 0;
}
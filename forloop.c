#include<stdio.h>
int main(){
 int i;
 int n;
 printf("Enter any number :");
 scanf("%d ", &n);
 for(i=1; i<=10; i++){
      printf("%d \n", i*n);
 }
 
    return 0;
}
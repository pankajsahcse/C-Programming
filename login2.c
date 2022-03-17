#include<stdio.h>
int main(){
     
     char u[20]="pankaj" ,p[20]="12345";
     char u1[20] ,p1[20] ;
     printf("Enter your username :");
     scanf("%s", &u1);
     printf("Enter your password :");
     scanf("%s", &p1);
     if (strcmp(u,u1)==0 && strcmp(p,p1)==0){
         printf("Welcome");
     }
     else{
         printf("Sorry");
     }
     return 0;
}
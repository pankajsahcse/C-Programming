#include<stdio.h>
int main(){

    char username="P";
    int password=1;
     printf("Enter your user name");
     scanf ("%s",username);
    printf("Enter Your password");
    
    if (username == "P" && password == 1 ){
        printf("Welcome");

    }
    else {
        printf("You are wrong");
    }


return 0;
}
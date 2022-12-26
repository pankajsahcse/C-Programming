#include<stdio.h>
int main (){
    int n,temp=0,remainder;

    printf("Enter a number for reversing :");
    scanf("%d", &n);

    while (n!=0)
    {
        remainder = n%10;
        temp =temp*10 +remainder;

        // Both the code which is listed below is same , but write down in another way 
        // n=n/10;  
        n/=10;
    }

    printf("The reverse number is = %d", temp);
    


    return 0;
}
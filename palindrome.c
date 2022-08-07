#include<stdio.h>
int main(){
    int n,r,sum=0,temp;
    printf("Enter the number :");
    scanf("%d", &n);
    temp=n;

    while (n>0)
    {
       r=n%10;
       sum=sum*10+r;
       n=n/10;
    }
    n=temp;
    if (n==sum)
    {
       printf("Its a pilindrome number");
    }
    else{
        printf("Its not a pilindrome number");
    }
    return 0;

}
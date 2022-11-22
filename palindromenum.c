// pallindrome number series
// The number which are given that equall to reverse number .
// Ex- 5225 =5225
// Lets Write Code

#include<stdio.h>
int main(){
    int num,r,sum=0,temp;

    printf("Enter the number :");
    scanf("%d", &num);
    temp=num;

    while (num>0)
    {
        r=num%10;
        sum=sum*10+r;
        num=num/10;
    }
    num=temp;
    if (num==sum)
    {
        printf("Its a Pilindrome number");
    }
    else {
        printf("Its not a Pilindrome number");
    }

    return 0;
    
    
}
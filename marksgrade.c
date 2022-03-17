#include<stdio.h>
int main(){
int Physics,Maths,Chemistry,English,Biology;
int sum;
 printf("enter the Physics Marks ");
 scanf("%d", &Physics);
 printf("\n enter the Maths marks ");
 scanf("%d", &Maths);
 printf("\n enter the Chemistry marks ");
 scanf("%d", &Chemistry);
 printf("\n enter the English marks ");
 scanf("%d", &English);
 printf("\n enter the Biology marks ");
 scanf("%d", &Biology);
sum=((Physics+Maths+Chemistry+English+Biology)/5);
printf("%d \n",sum);

if( sum < 100  && sum >= 90){
    printf("You got Grade 'A'");
 
}
else{
    printf("You got Grade 'B'");
}




return 0;

}




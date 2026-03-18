#include<stdio.h>

int main()
{ int num_1, num_2,a,b,temp,gcd;
    printf("Enter first integer number: ");
   scanf("%d",&num_1);
printf("\nEnter second integer number: ");
   scanf("%d",&num_2);
a=num_1;
b=num_2;
do{
   temp=b;
    b=a%b;
    a=temp;
} while(b!=0);
   gcd=a;
printf("\nGreatest Common Division of %d & %d is=%d",num_1,num_2,gcd);
     return 0;
}
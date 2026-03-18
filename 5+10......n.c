#include<stdio.h>
int main()
{
int i,sum=0,n;
printf("Enter the value of n: ");
scanf("%d",&n);
if(n>20){
for(i=5;i<=n;i=i+5)
sum=sum+i;
printf("5+10+15+20+....+%d= %d",n,sum);
}
else
printf("Wrong input");
 
    return 0;
}
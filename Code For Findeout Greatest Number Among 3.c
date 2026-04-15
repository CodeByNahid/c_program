#include<stdio.h>
#include<conio.h>


int main(void)
{
int a,b,c;
printf("C Code For Findout greatest number among 3 numbers.\n");
printf("Enter three numbers\n");
scanf("%d%d%d",&a,&b,&c);
if(
(a>b)&&(a>c))
printf("%d is the Greatest Number",a);
else if((b>a)&&(b>c))
printf("%d is the Greatest Number",b);
else
printf("%d is the greatest Number",c); 

    return 0;
}
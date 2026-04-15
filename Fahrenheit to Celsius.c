#include<stdio.h>

int main(void)
{ int c,f;
printf("Enter the fahrenheit temperature is: ");
scanf("%d",&f);
c=((5*(f-32))/9);

    printf("The Celsius temperature is: %d",c);
    return 0;
}
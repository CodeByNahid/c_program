#include<stdio.h>

int main(void)
{
int r,a,p;
printf("C Code for Findeout Area and Perimeter of a Circle.\n");
printf("Enter the radius of the circle: ");
   scanf("%d",&r);
     a=3.1416*r*r;
    p=2*3.1416*r;
    printf("The area of the circle is: %d",a);
    printf("\nThe perimeter of the circle is: %d",p);
    return 0;
}
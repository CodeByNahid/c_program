#include<stdio.h>

int main()
{ int i, factorial=1,n;
    printf("Enter any positive number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    factorial=factorial*i;
    }
   printf("The factorial of %d is = %d",n,factorial); 
    return 0;
}
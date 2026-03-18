#include<stdio.h>

int main()
{ int first,second,third;

    printf("Enter the first number: ");
    scanf("%d",&first);
    printf("\nEnter the second number: ");
    scanf("%d",&second);
    third=first;
    first=second;
    second=third;
    printf("\nAfter interchange, first number: %d ",first);
        printf("\nAfter interchange, second number: %d ",second);
    return 0;
}
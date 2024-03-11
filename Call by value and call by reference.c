#include<stdio.h>


void call_by_value(int x)
{
    x+= 20;
    printf("\nNumber inside call by value: %d", x);
}


void call_by_reference(int *x)
{
    *x+= 20;
    printf("\nNumber inside call by reference: %d", *x);
}


int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Number before call by value: %d", num);
    call_by_value(num);
    printf("\nNumber after call by value: %d\n", num);


    printf("\nNumber before call by value: %d", num);
    call_by_reference(&num);
    printf("\nNumber after call by value: %d", num);


    return 0;
}
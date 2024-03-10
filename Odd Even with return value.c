// Write a C program to find out whether a number is odd or even with checking 0 using functions.
// Using return value.


#include <stdio.h>

int oddeven(int n)
{
    if(n == 0)
    {
        return 100;
    }
    else if(n % 2 == 0)
    {
        return 101;
    }
    else
    {
        return 102;
    }
}

int main()
{
    int num, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    result = oddeven(num);

    if(result == 100)
    {
        printf("The number 0.\n");
    }
    else if(result == 101)
    {
        printf("The number is even.\n");
    }
    else
    {
        printf("The number is odd.\n");
    }

    return 0;
}
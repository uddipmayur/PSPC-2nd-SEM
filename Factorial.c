//Write a C program to find the factorial of a user input number

#include <stdio.h>


int fact(int n)
{
    if(n == 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}


int main()
{
    int num, result = 0;

    printf("Enter a number to find its factorial: ");
    scanf("%d", &num);

    if(num == 0)
    {
        printf("The Factorial of 0 is 0");
    }
    else
    {
        result = fact(num);
    }

    printf("The Factorial of %d is %d", num, result);

    return 0;
}

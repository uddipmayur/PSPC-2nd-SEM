// Write a C programme to find out whether a number is odd or even with checking 0 using functions.
// Void function.


#include <stdio.h>

void oddeven(int n)
{
    if(n == 0)
    {
        printf("You entered 0.\n");
    }
    else if(n % 2 == 0)
    {
        printf("The number is even.\n");
    }
    else
    {
        printf("The number is odd.\n");
    }
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    oddeven(num);

    return 0;
}

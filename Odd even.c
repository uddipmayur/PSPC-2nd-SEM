//Write a C program to take user input and find out whether the number is odd or even.


#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num == 0)
    {
        printf("The number is 0\n");
    }
    else if(num % 2 == 0)
    {
        printf("The number is even.\n");
    }
    else
    {
        printf("The number is odd.\n");
    }

    return 0;
}

// Write a C program to display  the Fibonacci Series upto nth term

#include <stdio.h>

int fibo(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    else
    {
        return fibo(n - 1) + fibo(n - 2);
    }
}

int main()
{
    int num, result = 0;

    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("\nEnter a positive integer.");
    }
    else
    {
        printf("The Fibonacci series upto %dth term is: ", num);
        for (int i = 0; i < num; i++)
        {
            printf("%d ", fibo(i));
        }
    }

    return 0;
}

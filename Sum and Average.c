//Write a C program to take 3 integers as user input and
//i) Find the sum of all 3 integers and display the result
//i) Find the average of all 3 integers and display them result

#include <stdio.h>

int main()
{
    int num1, num2, num3, sum = 0;
    float avg = 0;

    printf("Enter the first number\n");
    scanf("%d", &num1);
    printf("Enter the second number\n");
    scanf("%d", &num2);
    printf("Enter the third number\n");
    scanf("%d", &num3);

    sum = num1 + num2 + num3;
    printf("The sum of %d, %d, %d is: %d\n", num1, num2, num3, sum);

    avg = (num1 + num2 + num3)/3;
    printf("The average of %d, %d, %d is: %f\n", num1, num2, num3, avg);

    return 0;
}

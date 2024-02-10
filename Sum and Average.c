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

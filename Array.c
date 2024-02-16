#include <stdio.h>


int main()
{
    int n;
    float sum = 0, avg = 0;

    printf("Enter the length of the array: \n");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the Array: \n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("The elements of the array are: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d, ", arr[i]);
        sum = sum + arr[i];
    }

    printf("\nThe sum of the elements of the array is: %f", sum);

    avg = sum / n;
    printf("\nThe average of the elements of the array is: %f", avg);

    return 0;
}

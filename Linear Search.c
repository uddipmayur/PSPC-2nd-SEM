//Write a C program and implement a linear sorting algorithm

#include<stdio.h>


int main()
{
    int N;
    printf("Enter the size of the Array: ");
    scanf("%d", &N);

    int arr[N];

    //Assuming elements are not repeated

    printf("Enter the elements of the Array: ");
    for (int  i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    int target, index = -1;

    printf("Enter an element to search: ");
    scanf("%d", &target);

    for (int i = 0; i < N; i++)
    {
        if (target == arr[N])
        {
            index = N;
        }
    }

    if (index == -1)
    {
        printf("Element not found.");
    }
    else
    {
        printf("Element found at index %d", index);
    }

    return 0;
}
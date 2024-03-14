#include<stdio.h>


void print_array(int arr[], int n)
{
    int i = 0;
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}



void bubble_sort(int arr[], int N)
{
    int i, j;
    for(int i = 0; i < N; i++)
    {
        for(j = i + 1; j < N; i++)
        {
            int temp = arr[i];

            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
}



int main()
{
    int arr[] = {5, 7, 6, 1, 0, 2, 4};

    int N = sizeof(arr) / sizeof(arr[0]);

    printf("Array before sorting: ");

    print_array(arr, N);

    bubble_sort(arr, N);

    printf("/nArray after sorting: ");

    print_array(arr, N);

    return 0;
}
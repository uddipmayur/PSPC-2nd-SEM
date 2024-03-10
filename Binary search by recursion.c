//Binary sorting by search


#include<stdio.h>


int binary_search(int arr[], int low, int high, int target)
{
    if(low <= high)
    {
        int mid = low + (high - low) / 2;
        if(arr[mid] == target)
        {
            return mid;
        }
        if(arr[mid] < target)
        {
        return binary_search(arr, mid + 1, high, target);
        }
        else
        {
            return binary_search(arr, low, mid - 1, target);
        }
    }
}  


int main()
{
    int arr[] = {1,3,5,6,7};
    int target;

    printf("Enter an element to search: ");
    scanf("%d", &target);

    int N = sizeof(arr) / sizeof(arr[0]);

    int result = binary_search(arr, 0, N-1, target);

    if(result == -1)
    {
        printf("Element not found.");
    }
    else
    {
        printf("Element found.");
    }
    return 0;
}
//binary search with iterative method

#include<stdio.h>


int binary_search(int arr[], int low, int high, int target)
{
    while(low <= high)
    {
        int mid = low + (high -low) / 2;
        if(arr[mid] == target)
    {
    return mid;
    }
    if(arr[mid] < target)
    {
        low = mid + 1;
    }
    else
    {
        high = mid - 1;
    }
    }
    return -1;  
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

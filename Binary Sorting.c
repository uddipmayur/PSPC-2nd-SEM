#include<stdio.h>

int search(int arr[], int N, int x)
{
  int l = 0;
  int r = N - 1;
  while(l <= r)
  {
    int m = l + (r - l)/2;
    if(arr[m] == x)
    {
      return m;
    }
    else
    {
        r = m - 1;
    }
  }
  return -1;
}

int main()
{
  int arr[] = {2,3,4,10,40};
  int N = sizeof(arr)/sizeof(arr[0]);
  int x = 10;
  int r = search(arr, N, x);
  if(r == -1)
  {
      printf("Not Found.");
  }
  else
  {
      printf("Element found at %d index", r);
  }
  return 0;
}

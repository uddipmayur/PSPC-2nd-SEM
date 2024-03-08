//Binary sorting by recursion


int binary_search(int arr, int low, int high, int target)
{
 if(low <= high)
 {
  int mid = low + (high - low) / 2;
  if arr[mid] == x)
  {
   return mid;
  }
  if(arr[mid] < target)
  {
   return binary_search(ar, mid + 1, high, target)
  }
  else
  {
   return binary_search(arr, low, mid - 1, target)
  }
 }
}  


int main()
{
 arr[] = {1,3,5,6,7};
 int target = 9;
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

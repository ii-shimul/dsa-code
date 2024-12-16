#include <iostream>
using namespace std;

void countSwaps(int arr[], int n){
  int swapCount = 0; // declaring an integer variable swapCount and initializing it to 0, to count the number of swaps
  for (int i = 1; i < n; i++) // outer loop to iterate through the array n times for sorting
  {
    for (int j = 0; j < n - i; j++) // inner loop to compare and swap adjacent elements
    {
      if (arr[j] > arr[j + 1]) // if the current element is greater than the next, swap them
      {
        swap(arr[j], arr[j + 1]); // swapping adjacent elements
        swapCount++; // incrementing swapCount each time a swap is made
      }
    }
  }
  // printing output
  cout<<"Array is sorted in "<<swapCount<<" swaps.\n";
  cout<<"First Element: "<<arr[0]<<endl;
  cout<<"Last Element: "<<arr[n-1]<<endl;
  return;
}

int main()
{
  
  int n; // declaring an integer variable n, size of the array
  cin >> n; // taking n as input
  int arr[n]; // declaring an array called arr of size n
  for (int i = 0; i < n; i++) // taking input for the array elements and storing in arr
  {
    cin >> arr[i]; // taking input for each element of the array arr
  }
  
  countSwaps(arr, n); // calling countSwaps function

  return 0;
}

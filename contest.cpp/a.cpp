#include <iostream>
using namespace std;

int main()
{
  int t; // declaring an integer variable t, for testcases
  cin >> t; // taking t as input
  for (int i = 1; i <= t; i++) // running a for loop from 1 to t to take t testcases
  {
    int n; // declaring an integer variable n, size of the array
    cin >> n; // taking n as input
    int arr[n]; // declaring an array called arr of size n
    for (int i = 0; i < n; i++) // taking input for the array elements and storing in arr
    {
      cin >> arr[i]; // taking input for each element of the array arr
    }
    int swapCount = 0; // declaring an integer variable swapCount and initializing it to 0, to count the number of swaps
    for (int i = 1; i < n; i++) // outer loop to iterate through the array n times for sorting
    {
      for (int j = 0; j < n - i; j++) // inner loop to compare and swap adjacent elements
      {
        if (arr[j] > arr[j + 1]) // if the current element is greater than the next, swap them
        {
          swap(arr[j], arr[j + 1]); // swapping adjacent elements
          swapCount++;              // incrementing swapCount each time a swap is made
        }
      }
    }
    int result = swapCount % 10000007; // calculating result by taking swapCount modulo 10000007
    cout << result<< endl; // printing the result
  }

  return 0;
}

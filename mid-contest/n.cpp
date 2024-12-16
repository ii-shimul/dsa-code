#include <iostream>
using namespace std;

int main()
{
  int m = 6, n = 6; // define dimensions of a 6x6 2D array
  int arr[m][n]; // declare a 2D array named arr with dimensions 6x6

  // take input values for each element of the 2D array
  for (int i = 0; i < m; i++) 
  {
    for (int j = 0; j < n; j++)
    {
      cin >> arr[i][j]; // store each value in the array
    }
  }

  int sums[16] = {0}; // declare an array to hold the sums of hourglass patterns (maximum of 16 hourglasses in a 6x6 grid)
  int index = 0; // initialize an index variable to keep track of sums array positions

  // traverse through possible top-left positions of hourglasses
  for (int i = 0; i < m - 2; i++) 
  {
    for (int j = 0; j < n - 2; j++)
    {
      // calculate the sum of the current hourglass pattern and store it in sums
      sums[index] = arr[i][j] + arr[i][j + 1] + arr[i][j + 2] + // top row of the hourglass
                    arr[i + 1][j + 1] + // middle element of the hourglass
                    arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2]; // bottom row of the hourglass
      index++; // move to the next index in the sums array
    }
  }

  int max = sums[0]; // initialize max with the first sum value
  for (int i = 0; i < 16; i++) // loop through all hourglass sums to find the maximum
  {
    if (max < sums[i]) // if the current sum is greater than the current maximum
    {
      max = sums[i]; // update max with the new maximum sum
    }
  }

  cout << max << endl; // print the maximum hourglass sum
}

#include <iostream>
using namespace std;

int main()
{
  int t; // declare a variable t to store the number of test cases
  cin >> t; // take input for the number of test cases
  while (t--) // run the loop until all test cases are processed
  {
    int n; // declare a variable n to store the size of the array
    cin >> n; // take input for the size of the array
    int arr[n]; // declare an array of size n

    // take input values for each element in the array
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i]; // store the input value in the array at index i
    }

    bool isFound = false; // initialize a flag variable to true to indicate whether equilibrium is found

    // iterate through each element in the array to check for an equilibrium point
    for (int i = 0; i < n; i++)
    {
      int leftSum = 0; // initialize leftSum to 0 to store the sum of elements on the left of the current index
      int rightSum = 0; // initialize rightSum to 0 to store the sum of elements on the right of the current index

      // calculate the sum of elements to the left of the current index i
      for (int j = i - 1; j >= 0; j--)
      {
        leftSum += arr[j]; // add each element to leftSum
      }

      // calculate the sum of elements to the right of the current index i
      for (int k = i + 1; k < n; k++)
      {
        rightSum += arr[k]; // add each element to rightSum
      }

      // check if leftSum is equal to rightSum for the current index i
      if (rightSum == leftSum)
      {
        cout << "YES" << endl; // print "YES" if an equilibrium point is found
        isFound = true; // set flag to false since we found the equilibrium point
        break; // exit the loop as we don't need to check further
      }
    }

    // if no equilibrium point was found, print "NO"
    if (!isFound)
    {
      cout << "NO" << endl;
    }
  }

  return 0; // return 0 to indicate successful program termination
}

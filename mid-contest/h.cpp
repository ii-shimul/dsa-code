#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false); // disable sync with C-style I/O for faster performance
  cin.tie(0); // untie cin from cout for more efficient input

  int n, q; // declare n for array size and q for number of queries
  cin >> n >> q; // read the values for n and q
  vector<int> arr(n); // create a vector of size n

  // input elements into the array
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i]; // read each element
  }

  // process each query
  while (q--)
  {
    int item; // variable to store the item to search for
    cin >> item; // read the item to be searched

    int b = 0, e = n - 1; // initialize binary search bounds
    int mid; // variable for the middle index
    bool found = false; // flag to check if item is found

    // binary search for the item
    while (b <= e)
    {
      mid = (b + e) / 2; // calculate mid index
      if (arr[mid] == item) // check if mid element is the item
      {
        found = true; // item is found
        break; // exit the loop
      }
      else if (item < arr[mid]) // if item is less than mid element
      {
        e = mid - 1; // search in the left half
      }
      else // if item is greater than mid element
      {
        b = mid + 1; // search in the right half
      }
    }

    // output the result
    if (found) // if the item was found
    {
      cout << mid << endl; // print the index
    }
    else // if the item was not found
    {
      cout << -1 << endl; // print -1
    }
  }
  return 0; // end of program
}

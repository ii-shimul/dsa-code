#include <iostream>
using namespace std;

// defining macros to check the conditions for top, middle, and bottom sections of the 2d array
#define top (arr[row - 1][col - 1] != '.' && arr[row - 1][col] != '.' && arr[row - 1][col + 1] != '.')
#define middle (arr[row][col - 1] != '.' && arr[row][col + 1] != '.')
#define bottom (arr[row + 1][col - 1] != '.' && arr[row + 1][col] != '.' && arr[row + 1][col + 1] != '.')

int main()
{
  int m, n; // declare variables m and n to store the number of rows and columns
  cin >> m >> n; // take input for the number of rows and columns
  char arr[m][n]; // declare a 2D character array with dimensions m x n

  // take input for each element of the 2D array
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cin >> arr[i][j]; // store the character value in the array
    }
  }

  int row, col; // declare variables row and col to store the central coordinates of the array to check
  cin >> row >> col; // take input for the row and column indices
  --row; // adjust the row index to 0-based indexing
  --col; // adjust the column index to 0-based indexing

  // check if the top, middle, and bottom sections have any '.'
  if (top && middle && bottom) 
  {
    cout << "yes"; // if all conditions are true, print "yes"
    return 0; // exit the program
  }
  cout << "no"; // if any condition fails, print "no"
  return 0; // exit the program
}

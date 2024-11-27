#include <bits/stdc++.h> // include standard libraries for input/output and data structures
using namespace std;

int main()
{
    ios::sync_with_stdio(false); // disable synchronization with C I/O for faster input/output
    cin.tie(0); // untie cin from cout for more efficient input

    int t; // declare an integer variable t for the number of test cases
    cin >> t; // input the number of test cases
    for (int tc = 0; tc < t; tc++) // loop through each test case
    {
        int n; // declare an integer variable n for the size of the matrix
        cin >> n; // input the size of the matrix
        vector<vector<int>> arr(n, vector<int>(n)); // declare a 2D vector arr of size n x n

        bool isSym = true; // initialize a boolean variable isSym to true to track symmetry

        for (int i = 0; i < n; i++) // loop to input elements of the matrix
        {
            for (int j = 0; j < n; j++) // loop through each row to input elements
            {
                cin >> arr[i][j]; // input each element of the matrix
                if (arr[i][j] < 0) // check if the input element is positive or not
                {
                  isSym = false; // if negative, set isSym to false
                  cout << "Test #" << tc + 1 << ": Non-symmetric.\n"; // output that the matrix is non-symmetric
                  break; // break the loop
                }
                
            }
            if (!isSym)
            {
              break;
            }
        }
        
        for (int i = 0; i < n; i++) // loop through rows of the matrix
        {
            for (int j = 0; j < n; j++) // loop through columns of the matrix
            {
                // check if the current element is equal to its corresponding element
                if (arr[i][j] != arr[n - 1 - i][n - 1 - j]) // check for symmetry
                {
                    isSym = false; // set isSym to false if not symmetric
                    break; // exit the inner loop if a mismatch is found
                }
            }
            if (!isSym) break; // exit the outer loop if not symmetric
        }

        // output the result based on the symmetry check
        if (isSym) // if the matrix is symmetric
        {
            cout << "Test #" << tc + 1 << ": Symmetric.\n"; // output that the matrix is symmetric
        }
        else // if the matrix is not symmetric
        {
            cout << "Test #" << tc + 1 << ": Non-symmetric.\n"; // output that the matrix is non-symmetric
        }
    }
    
    return 0; // return 0 to indicate successful completion
}

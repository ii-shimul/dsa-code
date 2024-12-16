#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t; // Read number of test cases
    while (t--)
    {
        int n;
        cin >> n; // Read size of the matrix
        vector<vector<int>> arr(n, vector<int>(n)); // Use a vector to create a 2D matrix
        
        // Read the matrix elements
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> arr[i][j]; // Input matrix element
            }
        }
        
        bool isSym = true; // Flag to check if the matrix is symmetric
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (arr[i][j] != arr[j][i]) // Check symmetry condition
                {
                    isSym = false; // Set flag to false if condition fails
                    break; // Exit inner loop if non-symmetric
                }
            }
            if (!isSym) break; // Exit outer loop if non-symmetric
        }

        // Output result
        if (isSym)
        {
            cout << "Symmetric.\n"; // Output if symmetric
        }
        else
        {
            cout << "Non-symmetric.\n"; // Output if non-symmetric
        }
    }
    return 0; // Return success
}

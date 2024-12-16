#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); // disable synchronization with C I/O for faster input/output
    cin.tie(0); // untie cin from cout for more efficient input

    int n, m; // declare integers n and m for sizes of the arrays
    cin >> n; // input the size of the first array
    vector<int> arr(n); // declare a vector arr of size n
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i]; // input each element of arr
    }

    cin >> m; // input the size of the second array
    vector<int> brr(m); // declare a vector brr of size m
    for (int i = 0; i < m; i++)
    {
        cin >> brr[i]; // input each element of brr
    }

    int max = INT_MIN, min = INT_MAX; // initialize max and min with extreme values

    // loop through arr to find the maximum and minimum values
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i]) // update max if current element is greater
        {
            max = arr[i];
        }
        if (min > arr[i]) // update min if current element is smaller
        {
            min = arr[i];
        }
    }

    // loop through brr to find the maximum and minimum values
    for (int i = 0; i < m; i++)
    {
        if (max < brr[i]) // update max if current element is greater
        {
            max = brr[i];
        }
        if (min > brr[i]) // update min if current element is smaller
        {
            min = brr[i];
        }
    }

    int diff = max - min; // calculate the difference between max and min

    // create frequency arrays to count occurrences of elements in both arrays
    vector<int> afreq(diff + 1, 0); // frequency array for arr
    vector<int> bfreq(diff + 1, 0); // frequency array for brr

    // fill the frequency array for arr
    for (int i = 0; i < n; i++)
    {
        afreq[arr[i] - min]++; // increment frequency count for arr elements
    }

    // fill the frequency array for brr
    for (int i = 0; i < m; i++)
    {
        bfreq[brr[i] - min]++; // increment frequency count for brr elements
    }

    // compare frequency arrays and print differences
    for (int i = 0; i <= diff; i++)
    {
        if (afreq[i] != bfreq[i]) // if frequencies differ, output the element
        {
            cout << (i + min) << " "; // print the element corresponding to the frequency
        }
    }

    cout << endl; // print a newline for better output formatting
    return 0; // return 0 to indicate successful completion
}

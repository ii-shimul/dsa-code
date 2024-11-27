#include <iostream>
using namespace std;

int main()
{
    int n; // declare an integer variable n for the number of elements
    cin >> n; // input the number of elements
    int arr[n]; // declare an array arr of size n

    for (int i = 0; i < n; i++) // loop to input elements into the array
    {
        cin >> arr[i]; // input each element
    }

    int count = 0; // initialize a variable to count duplicate elements
    for (int i = 0; i < n; i++) // loop through the array
    {
        for (int j = i + 1; j < n; j++) // nested loop to compare current element with remaining elements
        {
            if (arr[i] == arr[j]) // check if elements are equal
            {
                count++; // increment duplicate count if a duplicate is found
                break; // break out of the inner loop to avoid counting the same element again
            }
        }
    }

    cout << "Total number of duplicate elements: " << count << endl; // output the duplicate count

    return 0;
}

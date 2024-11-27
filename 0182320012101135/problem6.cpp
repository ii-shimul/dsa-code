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

    cout << "Unique elements in the array: ";
    for (int i = 0; i < n; i++) // loop through the array
    {
        bool unique = true; // initialize a flag to true for each element
        for (int j = 0; j < n; j++) // nested loop to compare with all elements
        {
            if (i != j && arr[i] == arr[j]) // if a duplicate is found
            {
                unique = false; // set flag to false
                break; // break the inner loop
            }
        }
        if (unique) // if element is unique, print it
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}

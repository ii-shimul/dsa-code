#include <iostream>
#include <algorithm> // include algorithm header for sort function
using namespace std;

int main()
{
    int n; // declare an integer variable n for the size of arrays
    cin >> n; // input the size of arrays
    int arr1[n], arr2[n], merged[2 * n]; // declare three arrays: arr1, arr2, and merged

    for (int i = 0; i < n; i++) // loop to input elements into arr1
    {
        cin >> arr1[i]; // input each element
    }

    for (int i = 0; i < n; i++) // loop to input elements into arr2
    {
        cin >> arr2[i]; // input each element
    }

    // copy elements of arr1 and arr2 into merged array
    for (int i = 0; i < n; i++)
    {
        merged[i] = arr1[i]; // copy elements of arr1
    }
    for (int i = 0; i < n; i++)
    {
        merged[n + i] = arr2[i]; // copy elements of arr2
    }

    // sort the merged array in descending order
    sort(merged, merged + 2 * n, greater<int>()); // use greater<int>() for descending order

    cout << "Merged array in descending order: ";
    for (int i = 0; i < 2 * n; i++) // loop to print elements of merged array
    {
        cout << merged[i] << " "; // print each element
    }

    return 0;
}

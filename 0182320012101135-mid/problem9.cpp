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

    int max = arr[0], min = arr[0]; // initialize maxElement and minElement with first element

    for (int i = 1; i < n; i++) // loop to find max and min
    {
        if (arr[i] > max) // if current element is greater than maxElement
            max = arr[i]; // update maxElement
        if (arr[i] < min) // if current element is less than minElement
            min = arr[i]; // update minElement
    }

    cout << "Maximum element: " << max << endl; // print the maximum element
    cout << "Minimum element: " << min << endl; // print the minimum element

    return 0;
}

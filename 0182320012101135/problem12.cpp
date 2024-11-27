#include <iostream>
using namespace std;

int main()
{
    int n; // declare an integer variable n for the number of elements
    cin >> n; // input the number of elements
    int arr[n + 1]; // declare an array of size n+1 to accommodate new value

    for (int i = 0; i < n; i++) // loop to input elements into the array
    {
        cin >> arr[i]; // input each element
    }

    int newValue; // declare a variable for the new value
    cin >> newValue; // input the new value

    // Find the correct position to insert the new value
    int position = n; // initially set position to n (end of the array)
    for (int i = 0; i < n; i++) // loop through the array
    {
        if (newValue < arr[i]) // if new value is less than current element
        {
            position = i; // set position to current index
            break; // break the loop as position is found
        }
    }

    // shift elements to the right to make space for new value
    for (int i = n; i > position; i--)
    {
        arr[i] = arr[i - 1]; // move each element one step to the right
    }
    arr[position] = newValue; // insert new value at the correct position

    cout << "Array after insertion: ";
    for (int i = 0; i <= n; i++) // loop to print the updated array
    {
        cout << arr[i] << " "; // print each element
    }

    return 0;
}

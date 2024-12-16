#include <iostream>
using namespace std;

int main()
{
    int n; // declare an integer variable n for the number of elements
    cin >> n; // input the number of elements
    int arr[n + 1]; // declare an array arr of size n+1 (to accommodate new element)

    for (int i = 0; i < n; i++) // loop to input elements into the array
    {
        cin >> arr[i]; // input each element
    }

    int newValue, position; // declare variables for new value and position
    cin >> newValue >> position; // input the new value and position

    // shift elements to the right from the position
    for (int i = n; i > position; i--)
    {
        arr[i] = arr[i - 1]; // move each element one step to the right
    }
    arr[position] = newValue; // insert the new value at the desired position

    cout << "Array after insertion: ";
    for (int i = 0; i <= n; i++) // loop to print the updated array
    {
        cout << arr[i] << " "; // print each element
    }

    return 0;
}

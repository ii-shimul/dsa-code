#include <iostream>
using namespace std;

int main()
{
    int n; // declare an integer variable n for the number of elements
    cin >> n; // input the number of elements
    int arr[n]; // declare an array of size n

    for (int i = 0; i < n; i++) // loop to input elements into the array
    {
        cin >> arr[i]; // input each element
    }

    int position; // declare a variable for the position to delete
    cin >> position; // input the position

    // shift elements to the left to remove the element at the given position
    for (int i = position; i < n - 1; i++)
    {
        arr[i] = arr[i + 1]; // move each element one step to the left
    }

    cout << "Array after deletion: ";
    for (int i = 0; i < n - 1; i++) // loop to print the updated array
    {
        cout << arr[i] << " "; // print each element
    }
    cout << endl; // print a new line at the end

    return 0;
}

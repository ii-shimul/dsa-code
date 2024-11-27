#include <iostream>
using namespace std;

int main()
{
    int n; // declare an integer variable n for the number of elements
    cin >> n; // input the number of elements
    int arr1[n], arr2[n]; // declare two arrays of size n

    for (int i = 0; i < n; i++) // loop to input elements into arr1
    {
        cin >> arr1[i]; // input each element into arr1
    }

    for (int i = 0; i < n; i++) // loop to copy elements from arr1 to arr2
    {
        arr2[i] = arr1[i]; // copy each element
    }

    for (int i = 0; i < n; i++) // loop to print elements of the copied array arr2
    {
        cout << arr2[i] << " "; // print each element separated by a space
    }
    return 0;
}

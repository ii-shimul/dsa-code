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

    for (int i = 0; i < n; i++) // loop to print elements of the array
    {
        cout << arr[i] << " "; // print each element separated by a space
    }

    return 0;
}

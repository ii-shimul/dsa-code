#include <iostream>
using namespace std;

int main()
{
    int n; //  declare an integer variable n for the number of elements
    cin >> n; // input the number of elements
    int arr[n]; // declare an array arr of size n
    int odd[n], even[n]; // declare arrays to store odd and even elements
    int oddCount = 0, evenCount = 0; // counters for odd and even arrays

    for (int i = 0; i < n; i++) // loop to input elements into the array
    {
        cin >> arr[i]; // input each element
    }

    for (int i = 0; i < n; i++) // loop to separate odd and even elements
    {
        if (arr[i] % 2 == 0) // check if element is even
        {
            even[evenCount++] = arr[i]; // add to even array and increment even counter
        }
        else // if element is odd
        {
            odd[oddCount++] = arr[i]; // add to odd array and increment odd counter
        }
    }

    cout << "Even elements: ";
    for (int i = 0; i < evenCount; i++) // loop to print even elements
    {
        cout << even[i] << " ";
    }
    cout << endl; // print a new line

    cout << "Odd elements: ";
    for (int i = 0; i < oddCount; i++) // loop to print odd elements
    {
        cout << odd[i] << " ";
    }

    return 0;
}

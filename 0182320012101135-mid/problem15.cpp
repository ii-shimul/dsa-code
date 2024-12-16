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

    int magicIndex = -1; // initialize magicIndex to -1 (indicating not found)

    for (int i = 0; i < n; i++) // loop through the array
    {
        if (arr[i] == i) // check if element is equal to its index
        {
            magicIndex = i; // set magicIndex to the current index
            break; // break the loop as we found the magic index
        }
    }

    if (magicIndex != -1) // if magic index is found
    {
        cout << "Magic Index: " << magicIndex << endl; // print the magic index
    }
    else // if magic index is not found
    {
        cout << "No Magic Index found."; // print a message indicating no magic index
    }

    return 0;
}

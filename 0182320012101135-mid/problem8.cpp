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

    bool visited[n] = {false}; // declare a boolean array to keep track of visited elements

    cout << "Element frequencies:" << endl;
    for (int i = 0; i < n; i++) // loop through the array
    {
        if (visited[i]) // if element is already counted, skip it
            continue;

        int count = 1; // initialize count for the current element
        for (int j = i + 1; j < n; j++) // nested loop to count occurrences
        {
            if (arr[i] == arr[j]) // if duplicate is found
            {
                visited[j] = true; // mark as visited
                count++; // increment count
            }
        }

        cout << arr[i] << ": " << count << endl; // print element and its frequency
    }

    return 0;
}

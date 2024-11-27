#include <iostream>
#include <climits> // include climits header for INT_MIN and INT_MAX
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

    int max1 = INT_MIN, max2 = INT_MIN; // initialize max1 and max2 with smallest integer
    int min1 = INT_MAX, min2 = INT_MAX; // initialize min1 and min2 with largest integer

    for (int i = 0; i < n; i++) // loop to find max1, max2, min1, and min2
    {
        if (arr[i] > max1) // if current element is greater than max1
        {
            max2 = max1; // update max2 to max1
            max1 = arr[i]; // update max1 to current element
        }
        else if (arr[i] > max2 && arr[i] != max1) // if current element is greater than max2 and not equal to max1
        {
            max2 = arr[i]; // update max2 to current element
        }

        if (arr[i] < min1) // if current element is less than min1
        {
            min2 = min1; // update min2 to min1
            min1 = arr[i]; // update min1 to current element
        }
        else if (arr[i] < min2 && arr[i] != min1) // if current element is less than min2 and not equal to min1
        {
            min2 = arr[i]; // update min2 to current element
        }
    }

    cout << "Second largest element: " << max2 << endl; // print the second largest element
    cout << "Second smallest element: " << min2 << endl; // print the second smallest element

    return 0;
}

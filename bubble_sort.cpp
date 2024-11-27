#include <iostream>
using namespace std;

void traverse(int n, int arr[])
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i < n; i++)
    {
        cout << "pass no. " << i << endl;
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
            traverse(n, arr);
        }
    }

    return 0;
}

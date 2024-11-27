#include <iostream>
using namespace std;

void traversing(int n, int arr[])
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return;
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

    int item;
    cin >> item;

    // initially
    int BEG = 0;
    int END = n - 1;
    int MID = (BEG + END) / 2;

    while (BEG <= END && arr[MID] != item)
    {
        if (item < arr[MID])
            END = MID - 1;
        else
            BEG = MID + 1;
        MID = (BEG + END) / 2;
    }
    if (BEG > END)
        cout << "item is not found" << endl;
    else
        cout << "item is found at: " << MID << endl;
}
#include <iostream>
using namespace std;

void traverse(int n, int arr[])
{
    for (int i = 0; i < n - 1; i++)
    {
        cout << arr[i] << " ";
    }
    cout << arr[n - 1];
    cout << endl;
    return;
}

void searching(int item, int n, int arr[])
{
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == item)
        {
            cout << item << " is found at index " << i;
            flag = true;
            return;
        }
    }
    if (flag == false)
        cout << item << " is not found\n";
    return;
}

void inserting(int item, int idx, int n, int arr[])
{
    int narr[n + 1];

    for (int i = 0; i < idx; i++)
    {
        narr[i] = arr[i]; // copying
    }

    for (int i = idx; i < n; i++)
    {
        narr[i + 1] = arr[i]; // shifting
    }
    narr[idx] = item;
    traverse(n + 1, narr);
}

void deleting(int idx, int n, int arr[])
{
    int narr[n - 1];

    for (int i = 0; i < idx; i++)
    {
        narr[i] = arr[i]; // copying
    }

    for (int i = idx; i < n; i++)
    {
        narr[i] = arr[i + 1];
    }
    traverse(n - 1, narr);
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
    // traverse(n, arr);
    // int item;
    // cin>>item;
    // searching(item, n, arr);

    int idx;
    cin >> idx;

    deleting(idx, n, arr);

    // inserting(item,idx,n,arr);

    return 0;
}

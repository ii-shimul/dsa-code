#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n, d;
  cin >> n >> d;
  vector<int> arr(n);

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  for (int j = 0; j < d; j++)
  {
    for (int i = 0; i < n-1; i++)
    {
      swap(arr[i], arr[i + 1]);
    }
  }

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] <<" ";
  }
}
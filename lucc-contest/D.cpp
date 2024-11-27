#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    int arr[n];
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
      sum += arr[i];
    }
    if (n == 1)
    {
      cout << sum << " " << sum << endl;
    }
    else
    {

      cout << ceil(sum / 2) << " " << sum << endl;
    }
  }
}
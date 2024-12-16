#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);

  long long n, q;
  cin >> n >> q;
  vector<long long> arr(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  sort(arr.begin(), arr.end());

  while (q--)
  {
    long long x;
    cin >> x;
    long long BEG = 0;
    long long END = n - 1;
    long long MID = (BEG + END) / 2;

    while (BEG <= END && arr[MID] != x)
    {
      if (x < arr[MID])
        END = MID - 1;
      else
        BEG = MID + 1;
      MID = (BEG + END) / 2;
    }
    if (BEG > END)
      cout << n - BEG << endl;
    else
      cout << n - MID << endl;
  }
}
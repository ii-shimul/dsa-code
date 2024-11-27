#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int q;
  cin >> q;
  int tarr[q];
  for (int i = 0; i < q; i++)
  {
    cin >> tarr[i];
  }

  int count = 0;
  for (int i = 0; i < q; i++)
  {
    int BEG = 0;
    int END = n - 1;
    int MID = (BEG + END) / 2;
    while (BEG <= END && arr[MID] != tarr[i])
    {
      if (tarr[i] < arr[MID])
        END = MID - 1;
      else
        BEG = MID + 1;
      MID = (BEG + END) / 2;
    }
    if (BEG > END)
      continue;
    else
      count++;
  }
  cout << count << endl;
}
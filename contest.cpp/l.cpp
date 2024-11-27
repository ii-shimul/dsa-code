#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);

  int caseNum = 1;
  while (1)
  {
    int n, q;
    cin >> n >> q;
    if (n == 0 && q == 0)
    {
      break;
    }

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    cout << "CASE# " << caseNum << ":\n";
    caseNum++;
    while (q--)
    {
      int item;
      cin >> item;

      int BEG = 0;
      int END = n - 1;
      int MID = (BEG + END) / 2;

      while (BEG <= END && arr[MID] != item)
      {
        MID = (BEG + END) / 2;
        if (item < arr[MID])
          END = MID - 1;
        else
          BEG = MID + 1;
      }

      if (arr[MID] == item){
        // move left to find the first occurrence of the element
        while (MID > 0 && arr[MID - 1] == item)
        {
          MID--;
        }
        cout << item << " found at " << MID + 1 << endl;
      }
      else{
        cout << item << " not found" << endl;
      }
    }
  }
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);

  while (1)
  {
    int n;
    cin>>n;
    if (n == 0)
    {
      break;
    }
    
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {
        cin >> arr[i][j];
      }
    }
    int crow = 0;
    int ccol = 0;
    int sum = 0;
    int count = 0;
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
      sum = 0;
      crow = i;
      for (int j = 0; j < n; j++)
      {
        sum += arr[i][j];
        ccol = j;
      }
      if (sum % 2 != 0)
      {
        count++;
      }
      if (count > 1)
      {
        flag = false;
        cout<<"Corrupt\n";
      }
      else if (count == 1)
      {
        flag = false;
        cout << "Change bit ("<<crow<<","<<ccol<<")\n";
      }
    }
    if (flag)
    {
      cout<<"OK\n";
    }
    
  }
}
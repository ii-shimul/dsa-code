#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int m, p, n;
  cin >> m >> p >> n;
  int a[m][p];
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < p; j++)
    {
      cin >> a[i][j];
    }
  }
  int b[p][n];
  for (int i = 0; i < p; i++) {
    for (int j = 0; j < n; j++) {
      cin >> b[i][j];
    }
  }

  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      int sum = 0;
      for (int k = 0; k < p; k++)
      {
        sum += a[i][k] * b[k][j];
      }
      cout << sum << ' ';
    }
    cout << endl;
  }
  return 0;
}
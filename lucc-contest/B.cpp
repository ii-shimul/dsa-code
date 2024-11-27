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
    int m, a;
    cin>>a>>m;
    int ga = a*a*m;
    int wa = (a / 2) * (a / 2);
    int twa = (m - 1) * wa;
    int result = ga - twa - twa;
    cout << result << endl;
  }
}
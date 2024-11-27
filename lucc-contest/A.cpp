#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  char ab, ac, bc;
  cin >> ab >> ac >> bc;

  if (ab == '<' && ac == '<' && bc == '<')
  {
    cout << "B" << endl;
  }
  else if (ab == '<' && ac == '<' && bc == '>')
  {
    cout << "C" << endl;
  }
  else if (ab == '<' && ac == '>' && bc == '<')
  {
    cout << "A" << endl;
  }
  else if (ab == '<' && ac == '>' && bc == '>')
  {
    cout << "C" << endl;
  }
  else if (ab == '>' && ac == '<' && bc == '<')
  {
    cout << "A" << endl;
  }
  else if (ab == '>' && ac == '<' && bc == '>')
  {
    cout << "B" << endl;
  }
  else if (ab == '>' && ac == '>' && bc == '<')
  {
    cout << "A" << endl;
  }
  else if (ab == '>' && ac == '>' && bc == '>')
  {
    cout << "B" << endl;
  }
}
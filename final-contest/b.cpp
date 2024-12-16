#include <bits/stdc++.h>  // include all standard libraries
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);// untie cin from cout for faster I/O
  int n; 
  cin >> n; // input number of strings
  while (n--)
  {
    string s;
    cin >> s;// input the string
    int len = s.length();  // get the length of the string
    string firstHalf = s.substr(0, len / 2);  // slice first half of the string
    string lastHalf = s.substr(len / 2, len); // slice second half of the string
    reverse(lastHalf.begin(), lastHalf.end());  // reverse the second half of the string
    int isBalanced = true;// flag to check if the string is balanced
    for (int i = 0; i < len / 2; i++) // loop through the first half of the string
    {
      if ((firstHalf[i] == '(' && lastHalf[i] == ')') || (firstHalf[i] == '[' && lastHalf[i] == ']') || (firstHalf[i] == '{' && lastHalf[i] == '}'))  // check if the characters are matching
      {
        continue;// if matching, continue to the next character
      }
      else{
        isBalanced = false; // if not matching, set the flag to false
        break;// break the loop
      }
    }
    if (isBalanced)
    {
      cout << "YES" << endl; // if balanced print yes
    }
    else{
      cout << "NO" << endl; // if not print no
    }

  }
}

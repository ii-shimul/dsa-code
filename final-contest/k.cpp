#include <iostream>
#include <vector>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin >> n; // input the number of names
  vector<string> names(n);/// initialize vector with size n

  for (int i = 0; i < n; i++) {
    cin >> names[i];// input names
  }

  for (int i = 0; i < n; i++) {
    bool flag = false;  // flag to check if the current name exists before index i

    // check if the current name exists before index i
    for (int j = 0; j < i; j++) {
      if (names[i] == names[j]) {  // if the current name matches any previous name
        flag = true;  // set the flag to true
        break;  // no need to check further
      }
    }

    if (flag) {
      cout << "YES" << endl;  // if the name exists before, print "YES"
    }
    else {
      cout << "NO" << endl;  // if the name does not exist before, print "NO"
    }
  }

  return 0;
}

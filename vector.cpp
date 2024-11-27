#include <iostream>
#include <vector>
using namespace std;

// * vector is a dynamic array

int main(){
  // vector<int> vec(5, 3); // it will create a vector with size 5 and 3 as their value
  vector<int> vec;
  vec.push_back(10); // inserts at back
  cout << vec.size() << endl; // returns the size of the vector
  vec.pop_back(); // deletes last element
  vec.front(); // returns first element
  vec.back(); // returns last element
  vec.at(3); // same as vec[3]
  for (int val : vec){
    cout << val << endl;
  }
  return 0;
}
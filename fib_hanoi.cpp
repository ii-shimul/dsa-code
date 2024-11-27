#include <iostream>
using namespace std;

int step = 0;

int fib(int n){
  if (n == 0 || n == 1) return n;
  return fib(n - 2) + fib(n - 1);
}

void tower(int n, char Beg, char Aux, char End){
  if (n == 1){
    step++;
    cout << Beg << " -> " << End << endl;
    return;
  }
  tower(n - 1, Beg, End, Aux);
  tower(1, Beg, Aux, End);
  tower(n - 1, Aux, Beg, End);
}

int main(){
  int n;
  cin >> n;
  //    cout<<fib(n)<<endl;
  tower(n, 'A', 'B', 'C');
  cout << step;
}
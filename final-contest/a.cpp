#include <iostream>
#include <vector>
using namespace std;

int main()
{
  long long t;
  scanf("%lld", &t); // number of queries

  vector<long long> stack; // use vector as a dynamic stack
  while (t--)
  {
    int q;
    scanf("%d", &q); // read the query type

    if (q == 1)
    { // push operation
      long long n;
      scanf("%lld", &n);  // input the data
      stack.push_back(n); // push the data onto the stack
    }
    else if (q == 2)
    { // pop operation
      if (!stack.empty())
      {                   // check if the stack is not empty
        stack.pop_back(); // pop the top element from the stack
      }
    }
    else if (q == 3)
    { // print top operation
      if (stack.empty())
      {                     // check if the stack is empty
        printf("Empty!\n"); // print a message indicating the stack is empty
      }
      else
      {
        printf("%lld\n", stack.back()); // print the data of the top element in the stack
      }
    }
  }

  return 0; // return 0 to indicate successful execution
}

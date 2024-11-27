#include <iostream>
using namespace std;

int main()
{
  int n, k; // declaring integer variables n (number of problems) and k (minutes taken away by other activities)
  cin >> n >> k; // taking n and k as input from the user
  int problemTime = 240 - k; // calculating the remaining time available for solving problems (240 minutes total - k minutes to go to the party)
  int solveTime = 0; // declaring and initializing solveTime to 0, to track the total time spent solving problems

  for (int i = 1; i <= n; i++) // loop through each problem from 1 to n
  {
    // Check if adding the time for the current problem (5 * i) exceeds the available time (problemTime)
    if (solveTime + (5 * i) > problemTime) 
    {
      cout << i - 1; // if the current problem cannot be solved, print the number of problems solved so far (i - 1)
      return 0; // exit the program as no more problems can be solved within the remaining time
    }
    else // if the current problem can be solved within the available time
    {
      solveTime += 5 * i; // add the time for solving the current problem to solveTime
    }
  }

  cout << n; // if all n problems can be solved within the available time, print n
  return 0; // indicate successful program termination
}

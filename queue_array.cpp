#include <iostream>
using namespace std;
long long front = -1, rear = -1;
long long qsize;
void traverse(long long Q[]){
  if (front == -1)
  {
    printf("Empty!\n");
    return;
  }
  
  printf("%lld\n", Q[front]);
}
void push(long long item, long long Q[]){
  if ((front == 0 && rear == qsize - 1) || front == rear + 1)
  {
    cout << "overflow" << endl;
    exit(1);
  }
  else if (rear == -1){
    front = 0;
    rear = 0;
  }
  else if (rear == qsize - 1){
    rear = 0;
  }
  else rear++;
  Q[rear] = item;
}
void pop(){
  if (front == -1){
    cout << "Underflow" << endl;
    exit(1);
  }
  else if (front == qsize - 1){
    front = 0;
  }
  else if (front == rear){
    front = -1;
    rear = -1;
  }
  else front++;
}
int main(){
  cin >> qsize;
  long long Q[qsize];
  while (qsize--)
  {
    long long query; scanf("%lld", &query);
    if (query == 1)
    {
      long long n; scanf("%lld",&n);
      push(n, Q);
    }
    else if (query==2)
    {
      pop();
    }
    else if (query == 3)
    {
      traverse(Q);
    }
  }
  return 0;
}
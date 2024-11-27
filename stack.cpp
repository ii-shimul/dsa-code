// stack with linked list
#include <iostream>
using namespace std;

struct Stack{
  int data;
  Stack* next;
};

Stack* top = NULL;

void traverse(){
  Stack* ptr = top;
  while (ptr != NULL){
    cout << ptr->data << " ";
    ptr = ptr->next;
  }
  cout << endl;
}

void push(int item){
  Stack* newnode = new Stack;
  if (newnode == NULL){
    cout << "Overflow" << endl;
    exit(1);
  }
  newnode->data = item;
  newnode->next = NULL;
  newnode->next = top;
  top = newnode;
  traverse();
}


void pop(){
  if (top == NULL){
    cout << "Underflow" << endl;
    exit(1);
  }
  top = top->next;
}
int main(){
  push(25);
  push(45);
  push(55);
  pop();
  traverse();
  pop();
  traverse();
  pop();
  traverse();
  pop();
  traverse();
}




//////////// stack with array
/*
#include <iostream>
using namespace std;
int top = -1;
int maxstk;

void traverse(int stk[]){
  for (int i = 0; i <= top; i++){
    cout << stk[i] << " ";
  }
  cout << endl;
}

void push(int item, int stk[]){
  if (top == maxstk - 1){
    cout << "Overflow" << endl;
    exit(1);
  }
  top++;
  stk[top] = item;
  traverse(stk);
}


void pop(){
  if (top == -1){
    cout << "Underflow" << endl;
    exit(1);
  }
  top--;
}
int main(){
  cin >> maxstk;
  int stk[maxstk];
  push(25, stk);
  push(45, stk);
  push(55, stk);
  pop();
  traverse(stk);
  pop();
  traverse(stk);
  pop();
  traverse(stk);
  pop();
  traverse(stk);
}
*/
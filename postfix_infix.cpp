
// * infix postfix

#include <iostream>
using namespace std;

struct Stack{
  char data;
  Stack* next;
};

Stack* top = NULL;

void push(char item){
  Stack* newnode = new Stack;
  if (newnode == NULL){
    cout << "Overflow" << endl;
    exit(1);
  }
  newnode->data = item;
  newnode->next = NULL;
  newnode->next = top;
  top = newnode;
}

void pop(){
  if (top == NULL){
    cout << "Underflow" << endl;
    exit(1);
  }
  top = top->next;
}

int main(){
  string infix;
  getline(cin, infix);
  infix = "(" + infix + ")";
  string exp;
  for (int i = 0; i < infix.size(); i++){
    if (infix[i] >= 'A' && infix[i] <= 'Z'){
      exp.push_back(infix[i]);
    }
    else if (infix[i] == '('){
      push(infix[i]);
    }
    else if (infix[i] == ')'){
      while (top->data != '('){
        exp.push_back(top->data);
        pop();
      }
      pop();
    }
    else{
      if ((top->data == '^' || top->data == '/' || top->data == '*') && (infix[i] == '-' || infix[i] == '+')){
        exp.push_back(top->data);
        pop();
        push(infix[i]);
      }
      else if ((top->data == '^') && (top->data == '/' || top->data == '*')){
        exp.push_back(top->data);
        pop();
        push(infix[i]);
      }
      else{
        push(infix[i]);
      }
    }
  }
  cout << exp << endl;
}

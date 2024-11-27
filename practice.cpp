#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n){
  for (int i = 1; i < n; i++){
    for (int j = 0; j < n - i; j++){
      if (arr[j] > arr[j + 1]){
        swap(arr[j], arr[j + 1]);
      }
    }
  }
}

void traverse(int n, int arr[]){
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}

void insert(int n, int arr[]){
  int item, index;
  cin >> item >> index;
  int narr[n + 1];
  for (int i = 0; i < index; i++)
  {
    narr[i] = arr[i];
  }

  for (int i = index; i < n; i++)
  {
    narr[i + 1] = arr[i];
  }


  narr[index] = item;
  traverse(n + 1, narr);
}

void deleting(int n, int arr[]){
  int index;
  cin >> index;
  int narr[n - 1];
  for (int i = 0; i < index; i++){
    narr[i] = arr[i];
  }

  for (int i = index; i < n; i++){
    narr[i] = arr[i + 1];
  }
  traverse(n - 1, narr);

}

int main(){
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++){
    cin >> arr[i];
  }
  deleting(n, arr);
}
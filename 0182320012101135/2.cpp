
int evenElements(Node* head){
  Node* temp = head;
  int cnt = 0;
  while (temp != NULL)
  {
    if (temp->data % 2 == 0)
    {
      cnt++;
    }
    temp = temp->next;
  }
  return cnt;
}
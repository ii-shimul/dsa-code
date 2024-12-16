int deleteLast(Node* head){
  Node* temp = head;
  Node* prev = NULL;
  while (temp->next != NULL)
  {
    prev = temp;
    temp = temp->next;
  }
  prev->next = NULL;
}
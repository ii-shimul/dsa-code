int search(Node* head, int item){
  Node* temp = head;
  while (temp != NULL)
  {
    if (temp->data == item)
    {
      return temp;
    }
    temp = temp->next;
  }
  return NULL;
}
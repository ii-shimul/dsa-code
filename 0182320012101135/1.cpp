int difference(Node* head){
  int min = head->data;
  int max = head->data;
  Node* temp = head->next;
  while (temp != NULL)
  {
    if (temp->data > max)
    {
      max = temp->data;
    }
    if (temp->data < min)
    {
      min = temp->data;
    }
  }
  int diff = max - min;
  return diff;
}
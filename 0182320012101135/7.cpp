void insert(DNode* head, int pos, int value){
  DNode* newnode = new DNode();
  DNode* current = head;
  for (int i = 0; i < position -1; i++)
  {
    current = current->next;
  }
  if (!current)
  {
    return;
  }
  newnod->next = current->next;
  newnod->prev = current;
  if (current->next)
  {
    current->next->prev = newnode;
  }
  current->next = newnode;
}
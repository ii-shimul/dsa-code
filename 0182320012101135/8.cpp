void insertEnd(DNode* head, int value){
  DNode* node = new DNode();
  node->data = value;
  node->next = NULL;
  node->prev = NULL;
    if (!head)
    {
      head = node;
      return;
    }
  while (current->next)
  {
    current = current->next;
  }
  current->next = node;
  node->prev = current;
}
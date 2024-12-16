int insertBeg(DNode* head, int item){
  DNode* newnode = new DNode();
  newnode->data = item;
  newnode->next = head;
  head->prev = NULL;
  head = newnode;
}
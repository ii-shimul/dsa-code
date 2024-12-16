DNode* search(DNode* head, int value){
  DNode* temp = head;
  while (temp) {
    if (temp->data == value) return temp;
    temp = temp->next;
  }
  return NULL; // not found
}

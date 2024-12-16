void removeNode(DNode*& head, DNode* nodeDel){
  if (!head || !nodeDel) return;
  if (nodeDel == head) {
    head = head->next;
    if (head) head->prev = NULL;
  }
  else {
    if (nodeDel->prev){
      nodeDel->prev->next = nodeDel->next;
    }
    if (nodeDel->next){
      nodeDel->next->prev = nodeDel->prev;
    }
  }
}

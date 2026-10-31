struct ListNode* partition(struct ListNode* head, int x){
  struct ListNode* larger = NULL;
  struct ListNode** larger_next = &larger;
  struct ListNode** prev = &head;
  while (*prev) {
    if ((*prev)->val >= x) { /* Node needs to be moved to greater list */
      *larger_next = *prev;
      larger_next = &((*larger_next)->next);
      *prev = (*prev)->next;
    } else { /* Node can be left in place */
      prev = &((*prev)->next);
    }
  }

  *larger_next = NULL;
  *prev = larger; 

  return head;
}
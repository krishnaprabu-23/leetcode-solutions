
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {

    struct ListNode *temp = headA;
    while(temp->next != NULL)
        temp = temp->next;

	

    struct ListNode *current1 = temp;
    struct ListNode *current2 = headB;

    current1->next = current2;
    while(current2 != temp && current2 != NULL)
    {
        current1->next = current2;
        current1 = current1->next;
        current2 = current2->next;
    }

	

    current1 = headA; 
    current2 = headA; 

	
    while(current1 != NULL && current1->next != NULL)
    {
        current2 = current2->next;
        current1 = current1->next->next;

        if(current1 == current2)
        {
            current2 = headA;
            while(current1 != current2)
            {
                current1 = current1->next;
                current2 = current2->next;
            }

			  temp->next = NULL;
            return current1;
        }
    }

    temp->next = NULL;
    return NULL;
    
}
SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* llist) {
    SinglyLinkedListNode* temp = llist;
    while (temp != NULL) 
    {
        SinglyLinkedListNode* t = temp;
        while (t->next != NULL) 
        {
            if (t->next->data == temp->data) 
                t->next = t->next->next;
            else
                t = t->next;
        }
        temp = temp->next;
    }
    return llist;
}

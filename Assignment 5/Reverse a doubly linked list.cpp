DoublyLinkedListNode* reverse(DoublyLinkedListNode* llist) {
    DoublyLinkedListNode* curr = llist;
    DoublyLinkedListNode* prev = NULL;
    
    while (curr) {
        DoublyLinkedListNode* next = curr->next;
        curr->next = prev;
        curr->prev = next;
        prev = curr;
        curr = next;
    }
    
    return prev;
}

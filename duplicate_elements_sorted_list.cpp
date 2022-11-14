// link  https://www.codingninjas.com/codestudio/problems/unique-sorted-list_2420283?leftPanelTab=0

Node * uniqueSortedList(Node * head) {
    // Write your code here.
    if(head == NULL)
    {
        return NULL;
    }
    Node* p = head;
    Node* q = head->next;
    
    while(q!=NULL)
    {
        
        if(p->data == q->data)
        {
            p->next = q->next;
            delete q;
            q = p->next;
        }
        else
        {
            p = p->next;
            q = q->next;
        }
    }
    
    return head;

}

//link  https://www.codingninjas.com/codestudio/problems/sort-linked-list-of-0s-1s-2s_1071937?leftPanelTab=1

/********************************
    class Node
    {
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

********************************/
void inserttail(Node* &tail,Node* curr)
{
    tail->next = curr;
    tail = curr;
}
Node* sortList(Node *head)
{
    // Write your code here.
    /* // using data replication
    if(head == NULL || head->next == NULL)
    {
        return head;
    }
    
    Node* temp = head;
    int one=0,two=0,zero=0;
    
    while(temp!=NULL)
    {
       if(temp->data == 1)
       {
           one++;
       }
       else if(temp->data == 0)
       {
           zero++;
       }
        else if(temp->data == 2)
        {
            two++;
        }
        temp = temp->next;
    }
    
    Node* tem = head;
    while(zero--)
    {
        tem->data = 0;
        tem = tem->next;
    }
    
    while(one--)
    {
        tem->data = 1;
        tem = tem->next;
    }
    
    while(two--)
    {
        tem->data = 2;
        tem = tem->next;
    }
    
    return head;
    */
    
    Node* zerohead = new Node(-1); // dummy nodes after this node the values will be putted;
    Node* zerotail = zerohead;
    
    Node* onehead = new Node(-1);
    Node* onetail = onehead;
    
    Node* twohead = new Node(-1);
    Node* twotail = twohead;
    
    Node* temp = head;
    
    while(temp!= NULL)
    {
        int value = temp->data;
        
        if(value == 0)
        {
            inserttail(zerotail,temp);
        }
        else if(value == 1)
        {
            inserttail(onetail,temp);
        }
        else if(value == 2)
        {
            inserttail(twotail,temp);
        }
        
        temp = temp->next;
    }
    
    
    if(onehead->next != NULL)
    {
        zerotail->next = onehead->next;
    }
    else
    {
        zerotail->next = twohead->next;
    }
    
    onetail->next = twohead->next;
    twotail->next = NULL;
    
    head = zerohead->next;
    
    delete onehead;
    delete twohead;
    delete zerohead;
    
    return head;
    

}


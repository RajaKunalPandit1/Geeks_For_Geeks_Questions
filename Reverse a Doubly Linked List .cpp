Output Status:

Problem Solved Successfully 
Total Points Scored:
2/2
Total Time Taken:
0.0/1.4
Your Accuracy:
100%
Attempts No.:
1


struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }
        
};
*/
Node* reverseDLL(Node * head)
{
    Node *curr = head;
    Node *prev = NULL;
    
    if(head == NULL){
        return NULL;
    }
    if(head->next == NULL){
        return head;
    }
    
    while(curr!=NULL){
        prev = curr->prev;
        curr->prev = curr->next;
        curr->next = prev;
        
        curr = curr->prev;
    }
    
    return prev->prev;
    
}


// Another Solution 


Node* reverseDLL(Node * head)
{
    
    //Your code here
    if(head == NULL || head->next == NULL)
    return head;
    
    Node *prev = NULL, *curr = head;
    
    while(curr != NULL){
        prev = curr->prev;
        curr->prev = curr->next;
        curr->next = prev;
        
        curr = curr->prev;
    }
    
    return prev->prev;
}

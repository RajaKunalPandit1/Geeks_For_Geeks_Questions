Output Status:

Problem Solved Successfully 
Total Points Scored:
1/1
Total Time Taken:
0.0/1.1
Your Accuracy:
100%
Attempts No.:
1


/* Link list Node 
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
}; 
*/

/* Should return true if linked list is circular, else false */
bool isCircular(Node *head)
{
   
   Node *curr = head;
   
   while(true){
       curr = curr->next;
       
       if(curr == NULL){
           return false;
           break;
       }else if(curr == head){
           return true;
           break;
       }
   }
   
}

// Another Solution 

bool isCircular(struct Node *head)
{
    if(!head)
        return true;
    
    Node *temp=head;
    
    while(head&&head->next!=temp)
        head=head->next;
    
    if(!head||!(head->next))
        return false;
    
    return true;
}

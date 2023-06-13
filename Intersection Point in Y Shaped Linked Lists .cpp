Output Status : 

/* Linked List Node
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

//Function to find intersection point in Y shaped Linked Lists.
int intersectPoint(Node* head1, Node* head2)
{
    
    int len1 = 0,len2 =0;
    
    Node *curr = head1;
    
    while(curr != NULL){
        len1++;
        curr = curr->next;
    }
    curr = head2;
    
    while(curr != NULL){
        len2++;
        curr = curr->next;
    }
    
    Node *temp = NULL;
    
    if(len1 > len2){
        
        curr = head1;
        temp = head2;
    }else{
        temp = head1;
        curr = head2;
    }
    
    int diff = abs(len1-len2);
    
    for(int i=0;i<diff;i++){
        curr = curr->next;
    }
    
    while(temp != NULL && curr != NULL){
        
        if(temp == curr){
            return temp->data;
        }
        temp = temp->next;
        curr = curr->next;
        
    }
    return -1;
}

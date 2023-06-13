Output Status : 

Problem Solved Successfully
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Test Cases Passed: 
303 /303
Your Total Score: 
2477
Total Time Taken: 
0.34
Correct Submission Count: 
2
Attempts No.: 
2

/* Link list Node
struct Node {
  int data;
  struct Node *next;
  
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
//Function to merge two sorted linked list.
Node* sortedMerge(Node* head1, Node* head2)  
{  
    
    Node *head = NULL,*tail = NULL;
    
    if(head1 == NULL) return head2;
    
    if(head2 == NULL) return head1;
    
    if(head1->data <= head2->data){
        head = head1;
        tail = head1;
        head1 = head1->next;
    }else{
        
        head = head2;
        tail = head2;
        head2 = head2->next;
        
    }
    
    while(head1 != NULL && head2 != NULL){
        
        if(head1->data <= head2->data){
            tail->next = head1;
            tail = tail->next;
            head1 = head1->next;
        }else{
            tail->next = head2;
            tail = tail->next;
            head2 = head2->next;
        }
    }
    
    if(head1 == NULL){
        tail->next = head2;
    }else{
        tail->next = head1;
    }
    return head;
}  

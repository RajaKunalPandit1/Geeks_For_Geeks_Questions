Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1120 /1120
Total Points Scored: 
2 /2
Your Total Score: 
2794
Total Time Taken: 
0.1
Your Accuracy: 
100%
Attempts No.: 
1

/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

//Function to remove duplicates from sorted linked list.
Node *removeDuplicates(Node *head)
{
    
    if(head == NULL || head->next == NULL){
        return head;
    }
    
    Node *curr = head;
    
    while(curr != NULL && curr->next != NULL){
        
        if(curr->data == curr->next->data){
            curr->next = curr->next->next;
        }else{
            curr = curr->next;
        }
    }
    return head;
}

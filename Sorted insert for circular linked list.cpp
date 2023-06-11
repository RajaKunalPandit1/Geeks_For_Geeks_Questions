Output Status : 

Problem Solved Successfully
Test Cases Passed: 
90 /90
Total Points Scored: 
2 /2
Your Total Score: 
2436
Total Time Taken: 
0.03
Your Accuracy: 
50%
Attempts No.: 
2

/*
struct Node
{
  int data;
  struct Node *next;
  
  Node(int x){
      data = x;
      next = NULL;
  }
  
};
 */
 
// This function should return head of
// the modified list
class Solution
{
    public:
    Node *sortedInsert(Node* head, int data)
    {
       
       Node *temp = new Node(data);
       
       if(head == NULL){
           temp->next = temp;
           return temp;
       }
       
       Node *curr = head;
       
       if(head->data > data){
           temp->next = head->next;
           head->next = temp;
           
           int t = head->data;
           head->data = temp->data;
           temp->data = t;
           
           return head;
       }
       
       while(curr->next->data < data && curr->next != head){
           curr = curr->next;
       }
       
       if(curr->next == head){
           curr->next = temp;
           temp->next = head;
           return head;
       }else{
           
           temp->next = curr->next;
           curr->next = temp;
           return head;
       }  
    }
};

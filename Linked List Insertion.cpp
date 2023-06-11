Output Status :

Problem Solved Successfully
Test Cases Passed: 
200 /200
Total Points Scored: 
1 /1
Your Total Score: 
2427
Total Time Taken: 
0.05
Your Accuracy: 
100%
Attempts No.: 
1

/*
struct Node {
  int data;
  struct Node * next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

class Solution{
  public:
    //Function to insert a node at the beginning of the linked list.
    Node *insertAtBegining(Node *head, int x) {
       
       Node *temp = new Node(x);
       
       if(head == NULL){
           return temp;
       }
       
       temp->next = head;
       return temp;
       
    }
    
    
    //Function to insert a node at the end of the linked list.
    Node *insertAtEnd(Node *head, int x)  {
       
       Node *temp = new Node(x);
       
      if(head == NULL){
          return temp;
      }
       
      Node *curr = head;
      
      while(curr->next != NULL){
          curr = curr->next;
      }
      
      curr->next = temp;
      return head;
       
    }
};

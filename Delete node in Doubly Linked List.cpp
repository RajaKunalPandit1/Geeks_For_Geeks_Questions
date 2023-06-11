Output Status : 

Problem Solved Successfully
Test Cases Passed: 
400 /400
Total Points Scored: 
1 /1
Your Total Score: 
2433
Total Time Taken: 
0.01
Your Accuracy: 
100%
Attempts No.: 
1

/*
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  
  Node(int x){
      data = x;
      next = NULL;
      prev = NULL;
  }
  
};
*/

class Solution
{
    public:
    Node* deleteNode(Node *head, int x)
    {
      
      Node *temp = head;
      
      if(x == 1){
          temp = temp->next;
          temp->prev = NULL;
          free(head);
          return temp;
      }
      
      while(--x){
          temp = temp->next;
      }
      
      temp->prev->next = temp->next;
      
      if(temp->next != NULL){
          temp->next->prev = temp->prev;
      }
      
      return head;
    }
};

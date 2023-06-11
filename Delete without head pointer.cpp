Output status : 

Problem Solved Successfully
Test Cases Passed: 
130 /130
Total Points Scored: 
2 /2
Your Total Score: 
2440
Total Time Taken: 
0.06
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
}*head;
*/


class Solution
{
    public:
    //Function to delete a node without any reference to head pointer.
    void deleteNode(Node *del){
       
       Node *temp = del->next;
       del->data = temp->data;
       del->next = del->next->next;
       delete(temp);
    }
};

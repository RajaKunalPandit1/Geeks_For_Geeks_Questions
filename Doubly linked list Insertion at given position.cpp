Output Status : 

Problem Solved Successfully
Test Cases Passed: 
300 /300
Total Points Scored: 
1 /1
Your Total Score: 
2432
Total Time Taken: 
0.11
Your Accuracy: 
100%
Attempts No.: 
1

/* a Node of the doubly linked list 
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  Node(int x) { data = x; next = prev = NULL; }
}; */

//Function to insert a new node at given position in doubly linked list.
void addNode(Node *head, int pos, int data)
{
   
   Node *temp = new Node(data);
   Node *curr = head;
   
   while(pos--){
       curr = curr->next;
   }
   
   temp->next = curr->next;
   temp->prev = curr;
   curr->next = temp;
}

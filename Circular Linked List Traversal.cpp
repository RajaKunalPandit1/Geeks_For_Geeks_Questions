Output Status : 

Problem Solved Successfully
Test Cases Passed: 
50 /50
Total Points Scored: 
1 /1
Your Total Score: 
2434
Total Time Taken: 
0.01
Your Accuracy: 
100%
Attempts No.: 
1

//User function Template for C++

/* structure for a node 
struct Node
{
    int data;
    struct Node *next;
}; */

/* Function to print nodes in a given Circular linked list */
void printList(struct Node *head)
{
  
    Node *temp = head;
    
    do{
        cout<< temp->data << " ";
        temp = temp->next;
    }while(temp != head);
  
}

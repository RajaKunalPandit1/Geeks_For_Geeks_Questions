Output Status :

Problem Solved Successfully
Test Cases Passed: 
125 /125
Total Points Scored: 
2 /2
Your Total Score: 
2431
Total Time Taken: 
0.03
Your Accuracy: 
100%
Attempts No.: 
1

/*
struct Node
{
    int data;
    Node* next;
    Node(int x) {  data = x;  next = NULL; }
}; */

class Solution {
  public:
    // Function to count nodes of a linked list.
    bool searchKey(int n, struct Node* head, int key) {
        
        if(head == NULL){
            return false;
        }
        
        Node *curr = head;
        
        while(curr != NULL){
            if(curr->data == key){
                return true;
            }
            curr = curr->next;
        }
        return false;
    }
};

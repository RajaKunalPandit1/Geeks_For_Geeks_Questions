Output Status : 

Problem Solved Successfully
Test Cases Passed: 
600 /600
Total Points Scored: 
2 /2
Your Total Score: 
2442
Total Time Taken: 
0.2
Your Accuracy: 
100%
Attempts No.: 
1

/*
struct Node {
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
}; */
class Solution{
    public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int getMiddle(Node *head)
    {
       
       Node *fast = head,*slow = head;
       
       while(fast != NULL && fast->next != NULL){
           slow = slow->next;
           fast = fast->next->next;
       }
       return slow->data;
    }
};

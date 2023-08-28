Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1120 /1120
Total Points Scored: 
4 /4
Your Total Score: 
2802
Total Time Taken: 
0.22
Your Accuracy: 
100%
Attempts No.: 
1

/*
The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution
{
    public:
    Node *rev(Node *head){
        
        Node *prev = NULL;
        Node *curr = head;
        
        while(curr != NULL){
            
            Node *nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }
        return prev;
    }
    
    Node *compute(Node *head)
    {
        if(head == NULL) return NULL;
        
        head = rev(head);
        
        int max_val = head->data;
        Node *curr = head;
        
        while(curr->next != NULL){
            
            if(curr->next->data < max_val){
                
                curr->next = curr->next->next;
            }else{
                max_val = curr->next->data;
                curr = curr->next;
            }
        }
        return rev(head);
    }
};

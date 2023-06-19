Output Status : 

Problem Solved Successfully
Test Cases Passed: 
2113 /2113
Total Points Scored: 
4 /4
Your Total Score: 
2519
Total Time Taken: 
0.25
Your Accuracy: 
100%
Attempts No.: 
1

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/


class Solution
{
    public:
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k)
    {
        
        Node *curr = head;
        Node *temp = head;
        
        for(int i=1;i<=k-1;i++){
            curr = curr->next;
        }
        
        while(temp->next != NULL){
            temp = temp->next;
        }
        
        temp->next = head;
        head = curr->next;
        curr->next = NULL;
        return head;
        
    }
};
    

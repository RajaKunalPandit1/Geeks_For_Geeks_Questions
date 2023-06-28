Output Status : 

Problem Solved Successfully
Test Cases Passed: 
200 /200
Total Points Scored: 
4 /4
Your Total Score: 
2613
Total Time Taken: 
0.07
Your Accuracy: 
100%
Attempts No.: 
1

/*

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    
    Node *reverse(Node *head){
        
        Node *prev = NULL;
        Node *curr = head;
        
        while(curr != NULL){
            
            Node *next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        
        first = reverse(first);
        second = reverse(second);
        
        int sum = 0,carry = 0;
        
        Node *dummy = new Node(0);
        Node *temp = dummy;
        
        while(first != NULL || second != NULL || carry != 0){
            
            if(first != NULL){
                sum += first->data;
                first = first->next;
            }
            
            if(second != NULL){
                sum += second->data;
                second = second->next;
            }
            
            if(carry != 0){
                sum += carry;
                carry = 0;
            }
            
            int var = sum;
            
            if(sum > 9){
                var = sum%10;
                carry = sum/10;
            }
            
            sum = 0;
            
            Node *node = new Node(var);
            temp->next = node;
            temp = temp->next;
        }
        
        Node *res = reverse(dummy->next);
        return res;
    }
};

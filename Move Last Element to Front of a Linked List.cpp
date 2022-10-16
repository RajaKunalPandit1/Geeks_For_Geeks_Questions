Output Status : 

Problem Solved Successfully
Test Cases Passed: 
101020 /101020
Total Points Scored: 
2 /2
Your Total Score: 
1476
Total Time Taken: 
0.29
Your Accuracy: 
100%
Attempts No.: 
1

class Solution{
public:
    ListNode *moveToFront(ListNode *head){
        
        ListNode *curr = head;
        ListNode *prev = NULL;
        
        if(head == NULL || head->next == NULL){
            return head;
        }
        
        while(curr->next != NULL){
            prev = curr;
            curr = curr->next;
        }
        
        curr->next = head;
        prev->next = NULL;
        
        return curr;
    }
};

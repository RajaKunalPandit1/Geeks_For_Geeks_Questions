Output Status : 

Problem Solved Successfully
Test Cases Passed: 
400 /400
Total Points Scored: 
2 /2
Your Total Score: 
2471
Total Time Taken: 
0.11
Your Accuracy: 
100%
Attempts No.: 
1

    Node* pairWiseSwap(struct Node* head) 
    {
        
        if(head == NULL || head->next == NULL) return head;
        
        Node *curr = head->next->next;
        Node *prev = head;
        head = head->next;
        head->next = prev;
        
        while(curr != NULL && curr->next != NULL){
            
            prev->next = curr->next;
            prev = curr;
            Node *next = curr->next->next;
            curr->next->next = curr;
            curr = next;
        }
        
        prev->next = curr;
        return head;
    }

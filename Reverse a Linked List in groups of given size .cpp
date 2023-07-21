Output Status : 

Problem Solved Successfully
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Test Cases Passed: 
1110 /1110
Your Total Score: 
2708
Total Time Taken: 
0.06
Correct Submission Count: 
2
Attempts No.: 
3

/*
Reverse a linked list
  The input list will have at least one element  
  Return the node which points to the head of the new LinkedList
  Node is defined as 
    struct node
    {
        int data;
        struct node* next;
    
        node(int x){
            data = x;
            next = NULL;
        }
    
    }*head;
*/

class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
                
        if(head == NULL || k == 1) return head;
        
        node *dummy = new node(0);
        dummy->next = head;
        
        node *prev = dummy,*curr = dummy,*nex = dummy;
        
        int cnt = 0;
        
        while(curr->next != NULL){
            curr = curr->next;
            cnt++;
        }
        
        while(cnt >= k){
            
            curr = prev->next;
            nex = curr->next;
            
            for(int i=1;i<k;i++){
                
                curr->next = nex->next;
                nex->next = prev->next;
                prev->next = nex;
                nex = curr->next;
            }
            
            prev = curr;
            cnt -= k;
        }
        
        if(cnt != 0){
            prev->next = reverse(curr->next,cnt);
        }
        
        return dummy->next;
    }

Outupt Status : 

Problem Solved Successfully
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Test Cases Passed: 
200 /200
Your Total Score: 
2432
Total Time Taken: 
0.01
Correct Submission Count: 
2
Attempts No.: 
2

/*
struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }
        
};
*/
Node* reverseDLL(Node * head)
{
    
    if(head == NULL || head->next == NULL){
        return head;
    }
    
    Node *prev = NULL, *curr = head;
    
    while(curr != NULL){
        
        prev = curr->prev;
        curr->prev = curr->next;
        curr->next = prev;
        
        curr = curr->prev;
    }
    return prev->prev;
}

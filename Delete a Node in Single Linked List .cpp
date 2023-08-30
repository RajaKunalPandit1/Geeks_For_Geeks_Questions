Output Status : 

Problem Solved Successfully
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Test Cases Passed: 
1115 /1115
Your Total Score: 
2802
Total Time Taken: 
0.04
Correct Submission Count: 
3
Attempts No.: 
3

/* Link list Node 
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

/*You are required to complete below method*/
Node* deleteNode(Node *head,int x)
{
    
    if(head == NULL) return head;
    
    if(x == 1){
        head = head->next;
        return head;
    }
    
    Node *curr = head;
    
    for(int i=1;i< x-1 && curr != NULL;i++){
        curr = curr->next;
    }
    
    if(curr != NULL){
        curr->next = curr->next->next;
    }
    
    return head;
    
}

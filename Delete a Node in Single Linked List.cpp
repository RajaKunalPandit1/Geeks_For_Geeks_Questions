Output Status : 

Problem Solved Successfully
Test Cases Passed: 
300 /300
Total Points Scored: 
2 /2
Your Total Score: 
2429
Total Time Taken: 
0.01
Your Accuracy: 
100%
Attempts No.: 
1

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
    
    if(head == NULL){
        return NULL;
    }
    
    if(x == 1){
        Node *temp = head;
        free(temp);
        head = head->next;
        return head;
    }
    
    Node *curr = head;
    
    for(int i=0;i<x-2;i++){
        curr = curr->next;
    }
    
    Node *temp = curr->next;
    curr->next = curr->next->next;
    free(temp);
    return head;
}

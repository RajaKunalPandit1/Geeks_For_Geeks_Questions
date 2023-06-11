Output Status : 

Problem Solved Successfully
Test Cases Passed: 
100 /100
Total Points Scored: 
2 /2
Your Total Score: 
2438
Total Time Taken: 
0.01
Your Accuracy: 
100%
Attempts No.: 
1

/* structure for a node 
struct Node
{
	int data;
	struct Node *next;
};
*/

/* Function to delete a given node from the list */
void deleteNode(struct Node **head, int key)
{

    Node *temp = *head;
    
    while(temp->next->data != key){
        temp = temp->next;
    }
    temp->next = temp->next->next;
}

/* Function to reverse the linked list */
 void reverse(struct Node** head_ref)
{

    Node* temp=*head_ref;
    
    Node* tail=temp->next;
    
    while(tail->next !=temp){
        tail=tail->next;
    }
    
    Node* prev=tail;
    
    Node* curr=temp;
    
    Node* nex=curr;
    
    while(curr!=tail){
        nex=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nex;
    }
    curr->next=prev;
    *head_ref=curr;
}

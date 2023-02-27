Output Status : 

Problem Solved Successfully
Test Cases Passed: 
170 /170
Total Points Scored: 
2 /2
Your Total Score: 
1991
Total Time Taken: 
0.04
Your Accuracy: 
100%
Attempts No.: 
1


/*
Definition for singly Link List Node
struct Node
{
    int data;
    struct Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
*/


class Solution
{
public:
   
   Node *helper(Node *head,Node *prev){
       Node *curr = head;
       while(curr){
           Node *temp = curr->next;
           curr->next = prev;
           prev = curr;
           curr = temp;
       }
       return prev;
   }
   
    Node *reverse(Node *head, int k)
    {
        
        int i = 1;
        Node *curr = head;
        while(i<k && curr != NULL){
            i++;
            curr = curr->next;
        }
        
        Node *temp = curr->next;
        curr->next = NULL;
        
        return helper(head,helper(temp,NULL));
        
    }
};

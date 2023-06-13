Output Status : 

Problem Solved Successfully
Test Cases Passed: 
254 /254
Total Points Scored: 
2 /2
Your Total Score: 
2459
Total Time Taken: 
0.12
Your Accuracy: 
33%
Attempts No.: 
3

/*

struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }

*/
class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        
        Node *fast = head;
        Node *slow = head;
        
        while(fast != NULL && fast->next != NULL){
            
            slow = slow->next;
            fast = fast->next->next;
            
            if(slow == fast){
                return true;
            }
        }
        return false;
    }
};


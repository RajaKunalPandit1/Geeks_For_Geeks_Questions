Output Status : 

Problem Solved Successfully
Test Cases Passed: 
160 /160
Total Points Scored: 
2 /2
Your Total Score: 
1837
Total Time Taken: 
0.13
Your Accuracy: 
100%
Attempts No.: 
1

/*struct Node
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
     //Function to find first node if the linked list has a loop.
    int findFirstNode(Node* head)
    {
        Node *slow = head,*fast = head;
        
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
            
            if(slow == fast){
                slow = head;
                while(slow != fast){
                    slow = slow->next;
                    fast = fast->next;
                }
                return slow->data;
            }
        }
        return -1;
    }
};

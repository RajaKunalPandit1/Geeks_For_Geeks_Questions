Output Status : 

Suggest Feedback
Problem Solved Successfully
Test Cases Passed: 
1120 /1120
Total Points Scored: 
2 /2
Your Total Score: 
2605
Total Time Taken: 
0.12
Your Accuracy: 
100%
Attempts No.: 
1

/*
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
class Solution
{
    public:
    struct Node* makeUnion(struct Node* head1, struct Node* head2)
    {
        
        set<int> st;
        
        Node *curr1 = head1;
        Node *curr2 = head2;
        
        while(curr1 != NULL){
            st.insert(curr1->data);
            curr1 = curr1->next;
        }
        
        while(curr2 != NULL){
            st.insert(curr2->data);
            curr2 = curr2->next;
        }
        
        Node *dummy = new Node(0);
        Node *temp = dummy;
        
        for(auto x : st){
            
            Node *node = new Node(x);
            temp->next = node;
            temp = temp->next;
        }
        
        temp->next = NULL;
        return dummy->next;
    }
};

Output Status :

Problem Solved Successfully 
 Test Cases Passed:
30 / 30
Total Points Scored:
8/8
Total Time Taken:
0.18/1.31
Your Accuracy:
100%
Attempts No.:
1


/*Link list node 
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};*/

class Solution
{
    public:
    Node* reverseBetween(Node* head, int m, int n)
    {
        
        if(head == NULL){
            return NULL;
        }
        
        Node* dummy = new Node(0);
        Node *prev = dummy;
        dummy->next = head;
        
        for(int i=0;i<m-1;i++){
            
            prev = prev->next;
        }
        
        Node *start = prev->next;
        Node *nex = start->next;
        
        for(int i=0;i<n-m;i++){
            
            start->next = nex->next;
            nex->next = prev->next;
            prev->next = nex;
            nex = start->next;
        }
        return dummy->next;
    }
};

// Another Solution 

class Solution
{
    public:
        struct Node* reverse(struct Node* head)
    {
    	struct Node* prev = NULL;
    	struct Node* curr = head;
    
    	while (curr) {
    		struct Node* next = curr->next;
    		curr->next = prev;
    		prev = curr;
    		curr = next;
    	}
    	return prev;
    }
    
    public:
    Node* reverseBetween(Node* head, int m, int n)
    {
    	if (m == n)
    		return head;
    
    	// revs and revend is start and end respectively
    	// of the portion of the linked list which
    	// need to be reversed. revs_prev is previous
    	// of starting position and revend_next is next
    	// of end of list to be reversed.
    	Node* revs = NULL, *revs_prev = NULL;
    	Node* revend = NULL, *revend_next = NULL;
    
    	// Find values of above pointers.
    	int i = 1;
    	Node* curr = head;
    	while (curr && i <= n) {
    		if (i < m)
    			revs_prev = curr;
    
    		if (i == m)
    			revs = curr;
    
    		if (i == n) {
    			revend = curr;
    			revend_next = curr->next;
    		}
    
    		curr = curr->next;
    		i++;
    	}
    	revend->next = NULL;
    
    	// Reverse linked list starting with
    	// revs.
    	revend = reverse(revs);
    
    	// If starting position was not head
    	if (revs_prev)
    		revs_prev->next = revend;
    
    	// If starting position was head
    	else
    		head = revend;
    
    	revs->next = revend_next;
    	return head;
    }
    
};

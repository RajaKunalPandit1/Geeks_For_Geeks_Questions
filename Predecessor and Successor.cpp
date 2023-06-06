Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1122 /1122
Total Points Scored: 
4 /4
Your Total Score: 
2400
Total Time Taken: 
0.07
Your Accuracy: 
100%
Attempts No.: 
1

/*
struct Node
{
	int key;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    key = x;
	    left = NULL;
	    right = NULL;
	}
};
*/

// This function finds predecessor and successor of key in BST.
// It sets pre and suc as predecessor and successor respectively
class Solution
{
    public:
    void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
    {
        
        Node *temp = root;
        while(temp){
            
            if(temp->key < key){
                pre = temp;
            }
            
            if(temp->key >= key){
                temp = temp->left;
            }else{
                temp = temp->right;
            }
        }
        
        temp = root;
        
        while(temp){
            if(temp -> key > key){
                suc = temp;
            }
            if(temp -> key <= key){
                temp = temp->right;
            }else{
                temp = temp->left;
            }
        }
    }
};

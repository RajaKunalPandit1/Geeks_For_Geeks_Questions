Output Status : 

Problem Solved Successfully
Test Cases Passed: 
70 /70
Total Points Scored: 
4 /4
Your Total Score: 
1791
Total Time Taken: 
0.01
Your Accuracy: 
33%
Attempts No.: 
3

/*
struct Node{
	int data;
	struct Node * next;
	struct Node * bottom;
	
	Node(int x){
	    data = x;
	    next = NULL;
	    bottom = NULL;
	}
	
};
*/

class Solution {
public:
    
      Node* merge(Node* a,Node* b){

        if(a==NULL)

            return b;

        if(b==NULL)

            return a;

        Node* res;

        if(a->data<=b->data){

            res = a;

            res->bottom = merge(a->bottom,b);

        }

        else{

            res = b;

            res->bottom = merge(a,b->bottom);

        }

        return res;

    }

    Node *flatten(Node *root)

    {

        // Your code here

        if(root==NULL || root->next==NULL) return root;

        

        root = merge(root,flatten(root->next));

        return root;
    }
};

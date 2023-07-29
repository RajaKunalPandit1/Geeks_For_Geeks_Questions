Output Status: 

Problem Solved Successfully
Test Cases Passed: 
100 /100
Total Points Scored: 
2 /2
Your Total Score: 
2725
Total Time Taken: 
0.01
Your Accuracy: 
100%
Attempts No.: 
1

/*struct Node
{
	int data;
	Node *left, *right;
};*/

Node *build(int post[], int &i, int bound){
    
    if(i < 0 || post[i] < bound){
        return NULL;
    }
    
    Node *root = new Node(post[i--]);
    root->right = build(post,i,root->data);
    root->left = build(post,i,bound);
    return root;
}

Node *constructTree (int post[], int size)
{
    int i = size-1;
    return build(post,i,INT_MIN);
    
}

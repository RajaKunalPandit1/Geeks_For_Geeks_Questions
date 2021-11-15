Output Status:

Problem Solved Successfully 
Total Points Scored:
2/2
Total Time Taken:
0.1/1.5
Your Accuracy:
33%
Attempts No.:
3


/*Complete the function below
Node is as follows
struct Node{
	char data;
	Node *left,*right;
};
*/
Node *convertExpression(string str,int i)
{
    
    if(i>=str.length()){
        return NULL;
    }
    
    Node *root = new Node(str[i]);
    ++i;
    
    if(str[i] == '?' && i<str.length()){
        root->left = convertExpression(str,i+1);
    }else{
        root->right = convertExpression(str,i+1);
    }
    
    return root;

}

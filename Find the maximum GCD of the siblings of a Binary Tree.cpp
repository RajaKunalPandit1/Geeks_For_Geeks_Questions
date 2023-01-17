Output Status : 

Problem Solved Successfully
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Test Cases Passed: 
120 /120
Your Total Score: 
1835
Total Time Taken: 
0.05
Correct Submission Count: 
2
Attempts No.: 
2


/*
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */
int gcd(int a, int b){
    if(a == 0){
        return b;
    }else{
        return gcd((b%a),a);
    }
}

class Solution
{
    
    pair<int,int> cmp(pair<int,int> a, pair<int,int> b){
        
        if(a.second > b.second){
            return a;
        }else if(b.second > a.second){
            return b;
        }else if(a.first > b.first){
            return a;
        }else{
            return b;
        }
    }
    
    pair<int,int> solve(Node *root){
        if(root == NULL){
            return {0,-1};
        }
        if(root->left == NULL && root->right == NULL){
            return {0,-1};
        }
        if(root->left == NULL){
            return solve(root->right);
        }
        if(root->right == NULL){
            return solve(root->left);
        }
        
        pair<int,int> l = solve(root->left);
        pair<int,int> r = solve(root->right);
        pair<int,int> me = {root->data,gcd(root->left->data,root->right->data)};
        return cmp(me,cmp(l,r));

    }

public:
    int maxGCD( Node* root)
    {
        return solve(root).first;
    }
};

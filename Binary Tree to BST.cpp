Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1120 /1120
Total Points Scored: 
2 /2
Your Total Score: 
2832
Total Time Taken: 
0.15
Your Accuracy: 
100%
Attempts No.: 
1

    void preorder (Node *root, vector<int>& vec, int& i, bool check){
        if(root == NULL)
            return;
        preorder(root->left, vec, i, check);
        if(check)
            root->data = vec[i++];
        else
            vec.push_back(root->data);
        preorder(root->right, vec, i, check);
    }
    // The given root is the root of the Binary Tree
    // Return the root of the generated BST
    Node *binaryTreeToBST (Node *root)
    {
        //Your code goes here
        vector<int> vec;
        int i = 0;
        preorder(root, vec, i, false);
        sort(vec.begin(), vec.end());
        preorder(root, vec, i, true);
        return root;
    }

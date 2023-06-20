Output Status : 

Problem Solved Successfully
Test Cases Passed: 
20 /20
Total Points Scored: 
2 /2
Your Total Score: 
2542
Total Time Taken: 
0.03
Your Accuracy: 
100%
Attempts No.: 
1

// Recursive ::

// Function to insert a node in a BST.
Node* insert(Node* root, int key) {
    
    Node *temp = new Node(key);
    
    if(root == NULL){
        return temp;
    }
    
    if(root->data == key){
        return root;
    }else if(root->data > key){
        root->left = insert(root->left,key);
    }else{
        root->right = insert(root->right,key);
    }
    return root;
}

// Iterative :: 

// Function to insert a node in a BST.
Node* insert(Node* root, int key) {
    
    Node *temp = new Node(key);
    
    Node *prev = NULL;
    Node *curr = root;
    
    while(curr){
        
        prev = curr;
        
        if(curr->data == key){
            return root;
        }else if(curr->data > key){
            curr = curr->left;
        }else{
            curr = curr->right;
        }
    }
    
    if(prev == NULL){
        return temp;
    }else if(prev->data > key){
        prev->left = temp;
    }else{
        prev->right = temp;
    }
    return root;
}

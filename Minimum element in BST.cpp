Output Status:

Problem Solved Successfully 
Total Points Scored:
1/1
Total Time Taken:
0.1/1.4
Your Accuracy:
50%
Attempts No.:
2

// Function to find the minimum element in the given BST.
int minValue(Node* root) {
   
 while(root->left != NULL){
    root =  root->left;
 }
    return(root->data);

}

// Another Solution 


int minValue(Node* root) {
    // base case
    if (root == NULL) return -1;

    struct Node* current = root;

    // leftmost node is minimum so we move in BST till left node is not NULL.
    while (current->left != NULL) {
        current = current->left;
    }
    // returning the data at leftmost node.
    return (current->data);
}

Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1173 /1173
Total Points Scored: 
2 /2
Your Total Score: 
2818
Total Time Taken: 
0.57
Your Accuracy: 
20%
Attempts No.: 
5

bool isIsomorphic(Node *root1,Node *root2)
    {
          if(root1 == NULL && root2 == NULL){
           return true;
       }
       if(root1 == NULL && root2 != NULL){
           return false;
       }
       if(root1 != NULL && root2 == NULL){
           return false;
       }
       if(root1->data != root2->data){
           return false;
       }
       return (isIsomorphic(root1->left, root2->left) && isIsomorphic(root1->right, root2->right)) ||
       (isIsomorphic(root1->left, root2->right) && isIsomorphic(root1->right, root2->left));
    }

Output Status : 

Problem Solved Successfully
Test Cases Passed: 
10 /10
Total Points Scored: 
4 /4
Your Total Score: 
1253
Total Time Taken: 
0.01
Your Accuracy: 
100%
Attempts No.: 
1


  
/*

typedef struct Node
{
    int data;
    struct Node *left, *right;
} Node;


// A utility function to create a new tree node
Node* newNode( int data )
{
    Node* temp = (Node *)malloc( sizeof( Node ) );
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}
*/

class Solution{
public:
    //Function that constructs BST from its preorder traversal.
    Node* post_order(int pre[], int size)
    {
        if(size==0)
       return NULL;
   Node *b=newNode(pre[0]);
   Node *h=b;
   int k;
   for(int i=1;i<size;i++){
       h=b;
       k=0;
       while(k==0){
       if(h->data>pre[i]){
           if(h->left==NULL){
               Node *p=newNode(pre[i]);
               h->left=p;
               k++;
           }
           else{
               h=h->left;
           }
       }
       else{
           if(h->right==NULL){
               Node *p=newNode(pre[i]);
               h->right=p;
               k++;
           }
           else{
               h=h->right;
           }
       }
       }
   }
   return b;
 }
};

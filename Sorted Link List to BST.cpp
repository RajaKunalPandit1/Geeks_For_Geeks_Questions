Output Status: 

Problem Solved Successfully 
 Test Cases Passed:
175 / 175
Total Points Scored:
8/8
Total Time Taken:
0.38/1.79
Your Accuracy:
100%
Attempts No.:
1


//User function Template for C++

/* 
//Linked List
struct LNode
{
    int data;
    struct LNode* next;
    
    LNode(int x){
        data = x;
        next = NULL;
    }
};

//Tree
struct TNode  
{  
    
    int data;  
    struct TNode* left;  
    struct TNode* right; 
    TNode(int x)
    {
        data=x;
        left=right=NULL;
    }
}; */
class Solution{
  public:
  
    TNode *bst(vector<int> &v, int start, int end){
        
        if(start > end){
            return NULL;
        }
        
        int mid = (start+end+1)/2;
        
        TNode *temp = new TNode(v[mid]);
        temp->left = bst(v,start,mid-1);
        temp->right = bst(v,mid+1,end);
        return temp;
        
    }
  
    TNode* sortedListToBST(LNode *head) {
        
        vector<int> v;
        int cnt = 0;
        
        while(head != NULL){
            v.push_back(head->data);
            head = head->next;
            cnt++;
        }
        
        int start = 0,end = cnt-1;
        
        return bst(v,start,end);
    }
};

// Another Solution 

class Solution{
  public:
    /* A utility function that returns
    count of nodes in a given Linked List */
    int countLNodes(LNode *head)
    {
        int count = 0;
        LNode *temp = head;
        while (temp)
        {
            temp = temp->next;
            count++;
        }
        return count;
    }
    
    //Back-end complete function Template for C++
    
    /* This function counts the number of
    nodes in Linked List and then calls
    sortedListToBSTRecur() to construct BST */
    
    
    /* The main function that constructs
    balanced BST and returns root of it.
    head_ref --> Pointer to pointer to
    head node of linked list n --> No.
    of nodes in Linked List */
    TNode* sortedListToBSTRecur(LNode **head_ref, int n)
    {
        /* Base Case */
        if (n <= 0)
            return NULL;
    
        /* Recursively construct the left subtree */
        TNode *left = sortedListToBSTRecur(head_ref, n / 2);
    
        /* Allocate memory for root, and
        link the above constructed left
        subtree with root */
        TNode *root = new TNode((*head_ref)->data);
        root->left = left;
    
        /* Change head pointer of Linked List
        for parent recursive calls */
        *head_ref = (*head_ref)->next;
    
        /* Recursively construct the right
            subtree and link it with root
            The number of nodes in right subtree
            is total nodes - nodes in
            left subtree - 1 (for root) which is n-n/2-1*/
        root->right = sortedListToBSTRecur(head_ref, n - n / 2 - 1);
    
        return root;
    }
    
    TNode* sortedListToBST(LNode *head)
    {
        /*Count the number of nodes in Linked List */
        int n = countLNodes(head);
    
        /* Construct BST */
        return sortedListToBSTRecur(&head, n);
    }
};

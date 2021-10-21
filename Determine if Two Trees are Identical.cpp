Output Status:

Problem Solved Successfully 
Total Points Scored:
2/2
Total Time Taken:
0.1/1.3
Your Accuracy:
25%
Attempts No.:
4

class Solution
{
    public:
    //Function to check if two trees are identical.
    bool isIdentical(Node *r1, Node *r2)
    {

        if(r1 == NULL && r2 == NULL){
            return true;
        }else if(r1 == NULL || r2 == NULL){
            return false;
        }else if(r1->data != r2->data){
                return false;
        }else if(r1->data == r2->data){
               return isIdentical(r1->left,r2->left) && isIdentical(r1->right,r2->right);
        }
    }
};

// Another Solution 

class Solution
{
    public:
    //Function to check if two trees are identical.
    bool isIdentical(Node* a, Node* b)
    {
        //if both nodes are null then we return true.
        if (a == NULL && b == NULL)
            return true;
    

        if (a != NULL && b != NULL)
        {
            //we check if data at both nodes and left and right subtree of
            //both the nodes are equal then we return true else return false.
            return
            (
                a->data == b->data &&
                isIdentical(a->left, b->left) &&
                isIdentical(a->right, b->right)
            );
        }
    
        //returning false if one of the nodes is null and other isn't.
        return false;
    }

};

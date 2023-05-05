Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1025 /1025
Total Points Scored: 
4 /4
Your Total Score: 
2255
Total Time Taken: 
0.55
Your Accuracy: 
50%
Attempts No.: 
2

class Solution{
public:
    set<int> findsubtree(Node *node, int &ans, int k) {
        
        set<int> a,b;
        
        if(!node) {
            return a;
        }
        
        a=findsubtree(node->left,ans,k);
        b=findsubtree(node->right,ans,k);


        for(auto it:b) {
            a.insert(it);
        }

        a.insert(node->data);


        if(a.size()<=k) {
            ans++;
        }


        return a;
    }
    int goodSubtrees(Node *root,int k){
        // Code here
        int ans=0;
        findsubtree(root,ans,k);
        return ans;
    }
};

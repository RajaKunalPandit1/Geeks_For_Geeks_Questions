Output Status : 

Problem Solved Successfully
Test Cases Passed: 
40 /40
Total Points Scored: 
4 /4
Your Total Score: 
2571
Total Time Taken: 
1.19
Your Accuracy: 
100%
Attempts No.: 
1

class Solution{
  public:
    unordered_set<int> st;
    
    int isPairPresent(struct Node *root, int target){
        
        if(root == NULL) return false;
        
        if(isPairPresent(root->left,target) == true) return true;
        
        if(st.find(target-root->data) != st.end()){
            return true;
        }else{
            st.insert(root->data);
        }
        return (isPairPresent(root->right,target));
    }
};

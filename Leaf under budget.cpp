Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1120 /1120
Total Points Scored: 
2 /2
Your Total Score: 
2816
Total Time Taken: 
0.07
Your Accuracy: 
100%
Attempts No.: 
1

     void traverse(Node* root, int steps, vector<int> &res){
        
        if(!root) return;
        
        if(!root->left && !root->right) res.push_back(steps);
        
        traverse(root->left, steps + 1, res);
        traverse(root->right, steps + 1, res);
    }

    int getCount(Node *root, int k)
    {
        
        vector<int> res;
        traverse(root,1,res);
        
        sort(res.begin(),res.end());
        
        int cnt = 0;
        
        for(auto x : res){
            
            
            if(x <= k){
                cnt += 1;
                k -= x;
            }
        }
        return cnt;
    }

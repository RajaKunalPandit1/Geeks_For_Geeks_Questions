Output Status : 

Problem Solved Successfully
Test Cases Passed: 
13 /13
Total Points Scored: 
4 /4
Your Total Score: 
2577
Total Time Taken: 
0.09
Your Accuracy: 
100%
Attempts No.: 
1

 void func(Node *root, map<int,vector<int>> &mp){
        
        if(root == NULL) return;
        
        queue<pair<Node*,int>> q;
        
        q.push({root,0});
        
        while(!q.empty()){
            
            auto p = q.front();
            q.pop();
            
            int hd = p.second;
            Node *curr = p.first;
            
            mp[hd].push_back(curr->data);
            
            if(curr->left != NULL){
                q.push({curr->left,hd-1});
            }
            
            if(curr->right != NULL){
                q.push({curr->right,hd+1});
            }
        }
    }
    
    vector<int> verticalOrder(Node *root)
    {
        
        map<int,vector<int>> mp;
        
        func(root,mp);
        
        vector<int> res;
        
        for(auto x: mp){
            
            vector<int> v = x.second;
            
            for(int i=0;i<v.size();i++){
                res.push_back(v[i]);
            }
        }
        return res;
    }

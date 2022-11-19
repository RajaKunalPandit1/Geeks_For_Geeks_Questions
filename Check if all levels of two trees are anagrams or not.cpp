Output Status : 

Problem Solved Successfully
Test Cases Passed: 
354 /354
Total Points Scored: 
8 /8
Your Total Score: 
1610
Total Time Taken: 
0.05
Your Accuracy: 
100%
Attempts No.: 
1

class Solution{
    public:
    bool areAnagrams(Node *root1, Node *root2)
    {
        
        queue<Node *> q1;
        queue<Node *> q2;
        
        q1.push(root1);
        q2.push(root2);
        
        while(!q1.empty() && !q2.empty()){
            
            int n = q1.size();
            
            unordered_map<int,int> mp;
            
            for(int i=0;i<n;i++){
                
                Node *curr = q1.front();
                q1.pop();
                mp[curr->data]++;
                
                if(curr->left != NULL){
                    q1.push(curr->left);
                }
                if(curr->right != NULL){
                    q1.push(curr->right);
                }
            }
            
            int sz = q2.size();
            
            if(n != sz){
                return false;
            }
            
            for(int i=0;i<sz;i++){
                
                Node *curr = q2.front();
                q2.pop();
                
                if(mp.find(curr->data) == mp.end()){
                    return false;
                }
                
                mp[curr->data]--;
                
                if(mp[curr->data] == 0){
                    mp.erase(curr->data);
                }
                if(curr->left != NULL){
                    q2.push(curr->left);
                }
                if(curr->right != NULL){
                    q2.push(curr->right);
                }
            }
            
            if(!mp.empty()){
                return false;
            }
        }
        return true;
    }
};

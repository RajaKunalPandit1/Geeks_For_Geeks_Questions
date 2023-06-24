Output Status : 

Problem Solved Successfully
Test Cases Passed: 
106 /106
Total Points Scored: 
4 /4
Your Total Score: 
2581
Total Time Taken: 
0.01
Your Accuracy: 
100%
Attempts No.: 
1

/*
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/
class Solution
{
    public:
    
    void func(Node *root, map<int,int> &mp){
        
        queue <pair<Node *,int>> q;
        q.push({root,0});
        
        while(!q.empty()){
            
            auto p = q.front();
            q.pop();
            
            Node *curr = p.first;
            int hd = p.second;
            
            if(mp.find(hd) == mp.end()){
                mp[hd] = curr->data;
            }
            
            if(curr->left != NULL){
                q.push({curr->left,hd-1});
            }
            if(curr->right != NULL){
                q.push({curr->right,hd+1});
            }
        }
    }
    
    vector<int> topView(Node *root)
    {
        
        map<int,int> mp;
        
        func(root,mp);
        
        vector<int> res;
        
        for(auto x: mp){
            res.push_back(x.second);
        }
        return res;
    }

};

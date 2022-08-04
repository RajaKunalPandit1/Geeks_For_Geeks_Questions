Output Status : 

Problem Solved Successfully
Test Cases Passed: 
127 /127
Total Points Scored: 
4 /4
Your Total Score: 
1257
Total Time Taken: 
0.01
Your Accuracy: 
100%
Attempts No.: 
1

class Solution{
public:    
    bool isCompleteBT(Node* root){
        
        queue<Node *> q;
        q.push(root);
        
        int f = 0;
        
        while(!q.empty()){
            
            int s = q.size();
            
            for(int i=0;i<s;i++){
                
                Node *t = q.front();
                q.pop();
                
                if(t->left != NULL){
                    
                    q.push(t->left);
                    
                    if(f == 1){
                        return false;
                    }
                }else{
                    f = 1;
                }
                
                if(t->right != NULL){
                    q.push(t->right);
                    if(f == 1){
                        return false;
                    }
                }else{
                    f = 1;
                }
            }
        }
        return true;
    }
};

// Another Solution 

class Solution{
public:
    bool isCompleteBT(Node* root){
        queue<Node*> q;
        q.push(root);
        
        int check = 0;
        bool ans = true;
        
        while(q.size()>0){
            root = q.front();
            q.pop();
            
            if(check == 1 and root!=NULL){
                ans = false;
            }
            if(root == NULL){
                check=1;
            }
            else{
                q.push(root->left);
                q.push(root->right);
            }
        }
        return ans;
    }
};

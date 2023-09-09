Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1120 /1120
Total Points Scored: 
2 /2
Your Total Score: 
2834
Total Time Taken: 
0.21
Your Accuracy: 
100%
Attempts No.: 
1

      void largest(Node* root,vector<int >& arr){
         if(root==NULL){
         return ;
       }
       
       largest(root->left,arr);
       arr.push_back(root->data);
       largest(root->right,arr);
       
       return;
    }
    
    int kthLargest(Node *root, int K)
    {   
      
       
        //Your code here
        vector<int> arr;
      
        largest(root,arr);
       
        int n=arr.size();
        if(n<K)return -1;
   
     return arr[n-K]; 
    }

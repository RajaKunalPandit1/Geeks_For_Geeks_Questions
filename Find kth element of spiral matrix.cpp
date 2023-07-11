Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1121 /1121
Total Points Scored: 
4 /4
Your Total Score: 
2677
Total Time Taken: 
0.21
Your Accuracy: 
100%
Attempts No.: 
1

    int findK(int a[MAX][MAX],int n,int m,int k)
    {
         vector<int>ans;
        
          int top=0,left=0,bottom=n-1,right=m-1;
        
          while(top<=bottom && left<=right){
        
              for(int i=left;i<=right;i++){
        
                  ans.push_back(a[top][i]);
        
              }
        
              top++;
        
              for(int i=top;i<=bottom;i++){
        
                  ans.push_back(a[i][right]);
        
              }
        
              right--;
        
              if(top<=bottom){
        
                   for(int i=right;i>=left;i--){
        
                  ans.push_back(a[bottom][i]);
        
                 }
        
                 bottom--;
        
              }
        
              if(left<=right){
        
                   for(int i=bottom;i>=top;i--){
        
                  ans.push_back(a[i][left]);
        
                 }
                 left++;
              }
          }
          return ans[k-1];

    }

};

Output Status:

Problem Solved Successfully 
Total Points Scored:
4/4
Total Time Taken:
0.0/2.2
Your Accuracy:
100%
Attempts No.:
1


int save_gotham(int arr[], int n)
{
    int res = 0;
    vector<int> ans;
    stack<int> s;
    
    ans.push_back(0);
    s.push(arr[n-1]);
    
    for(int i=n-2;i>=0;i--){
        while(!s.empty() && arr[i]>=s.top()){
            s.pop();
        }
        int cl_to = s.empty()?0:s.top();
        ans.push_back(cl_to);
        s.push(arr[i]);
    }
    
    for(int i=0;i<ans.size();i++){
        res+= ans[i];
    }
    return res;
}

// Another Solution 


int save_gotham(int arr[], int n)
{
    stack < int > s; 
  
    int ans = 0;
    /* push the first element to stack */
    s.push(arr[0]); 
    
    // iterate for rest of the elements 
    for (int i = 1; i < n; i++) { 
    
        if (s.empty()) { 
          s.push(arr[i]); 
          continue; 
        } 
        
        /* if stack is not empty, then 
           pop an element from stack. 
           If the popped element is smaller 
           than next, then 
        a) print the pair 
        b) keep popping while elements are 
        smaller and stack is not empty */
        while (s.empty() == false && s.top() < arr[i]) 
        {          
            // cout << s.top() << " --> " << arr[i] << endl;
            ans += arr[i];
            s.pop(); 
        } 
        
        /* push next to stack so that we can find 
        next greater for it */
        s.push(arr[i]); 
    } 
    
    return ans;
  
   
}

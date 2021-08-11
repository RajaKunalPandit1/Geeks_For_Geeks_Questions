Output Status:
Problem Solved Successfully 
Total Points Scored:
2/2
Total Time Taken:
0.1/1.1
Your Accuracy:
100%
Attempts No.:
1
  
  
  // Time: O(n) :: Aux_Space: O(1);
  
  
  int findFrequency(vector<int> v, int x){
    
    int res=0;
    for(int i=0;i<v.size();i++){
        if(v[i]==x){
            res++;
        }
    }
    return res;
    
}

//OR


int findFrequency(vector<int> v, int x){
    
    return count(v.begin(),v.end(),x);
    
}



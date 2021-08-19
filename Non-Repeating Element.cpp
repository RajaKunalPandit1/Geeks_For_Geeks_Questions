Output Status:

Problem Solved Successfully 
Total Points Scored:
2/2
Total Time Taken:
0.5/1.9
Your Accuracy:
100%
Attempts No.:
1


class Solution{
    public:
    int firstNonRepeating(int arr[], int n) 
    { 
        unordered_map<int,int> m;
        
        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }
        for(int i=0;i<n;i++){
            if(m[arr[i]] == 1){
                return arr[i];
            }
        }
        
        
    } 
  
};

// Another Solution 

class Solution{
    public:
    int firstNonRepeating(int arr[], int n) 
    { 
        // Insert all array elements in hash 
        // table 
        unordered_map<int, int> mp; 
        for (int i = 0; i < n; i++) 
            mp[arr[i]]++; 
      
        // Traverse array again and return 
        // first element with count 1. 
        for (int i = 0; i < n; i++) 
            if (mp[arr[i]] == 1) 
                return arr[i]; 
        return 0; 
    } 
  
};

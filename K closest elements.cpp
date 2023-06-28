Output Status : 

Problem Solved Successfully
Test Cases Passed: 
340 /340
Total Points Scored: 
2 /2
Your Total Score: 
2619
Total Time Taken: 
0.51
Your Accuracy: 
25%
Attempts No.: 
4

// User function template for C++

class Solution {
  public:
    
    struct comp{
        bool operator() (pair<int,int>a, pair<int,int>b){
            if(a.first==b.first)
                return a.second<b.second;
            return a.first>b.first;
        }
    };
  
    vector<int> printKClosest(vector<int> arr, int n, int k, int x) {
        // code here
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,comp>pq;
        
        for(int i=0;i<n;i++){
            if(arr[i]-x != 0)
            pq.push({abs(arr[i]-x),i});
        }
        
        vector<int>ans;

        for(int i=0;i<k;i++){
            int index=pq.top().second;
            
            pq.pop();
            ans.push_back(arr[index]);
        }
        return ans;
    }
};

// Another Sol :: 

// User function template for C++

class Solution {
  public:
    
    static bool cmp(pair<int,int> a , pair<int,int> b)
    {
        if(a.first == b.first)
        {
            return a.second > b.second;
        }
        
        return a.first < b.first;
    }
    
  
  
    vector<int> printKClosest(vector<int> arr, int n, int k, int x) {
        
        
        vector<pair<int,int>> v;
        
        for(int i = 0 ; i < n; i++)
        {
            if(arr[i] == x)
            {
                continue;
            }
            
            
            v.push_back(make_pair(abs(arr[i]-x) , arr[i]));
        }
        
        sort(v.begin() , v.end() , cmp);
        
        vector<int> ans;
        
        int m = k;
        
        int i = 0;
        
        while(m != 0)
        {
            ans.push_back(v[i].second);
            m--;
            i++;
        }
        
        
        return ans;
    }
};

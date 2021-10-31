Output Status:

Problem Solved Successfully 
Total Points Scored:
4/4
Total Time Taken:
0.7/1.7
Your Accuracy:
100%
Attempts No.:
1
  
  class Solution{
    
    static bool comp(pair<int, int> a, pair<int, int> b) 
{ 
    if(a.first == b.first){
    return (a.second < b.second); 
    }
    return a.first > b.first;
} 
   
    public:
    //Complete this function
    //Function to sort the array according to frequency of elements.
    vector<int> sortByFreq(int arr[],int n)
    {
       vector<int> res;
       vector<pair<int,int>> pres;
       
       
       unordered_map<int,int> m;
       
       for(int i=0;i<n;i++){
           m[arr[i]]++;
      }
      
      for(int i=0;i<n;i++){
          if(m.find(arr[i])!=m.end()){
              pres.push_back({m[arr[i]],arr[i]});
              m.erase(arr[i]);
          }
      }
      
      sort(pres.begin(),pres.end(),comp);
       
      for(auto x:pres){
          for(int j=0;j<x.first;j++){
              res.push_back(x.second);
          }
      }
       return res;
       
    }
};

// Another Solution 


class Solution{
  public:
    unordered_map<int, int> m;
    
    //Function used in sorting vector elements first according to frequency
    //and if it is same for both values, then smaller number comes first.
    static bool sortByVal(const pair<int, int>& a, const pair<int, int>& b){
        if(a.second == b.second) return a.first < b.first;
        
        return a.second > b.second;
    }
    
    //Function to sort the array according to frequency of elements.
    vector<int> sortByFreq(int arr[],int n){
        
        vector<pair<int, int>> v;
        
        //using map to keep count of the elements.
        for(int i = 0;i<n;i++){
            m[arr[i]]++;
        }
        
        //copying the elements and their count from map to vector.
        copy(m.begin(), m.end(), back_inserter(v));
        
        //sorting the vector according to frequency.
        sort(v.begin(), v.end(), sortByVal);
        vector<int> ans;
        
        for(int i = 0;i<v.size();i++){
            //storing elements as many times as their count in output vector.
            for(int j = 0;j<v[i].second;j++){
                ans.push_back( v[i].first );
            }
        }
        m.clear();
        
        //returning the output.
        return ans;
    }
};

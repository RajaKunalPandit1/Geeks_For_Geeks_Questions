Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1117 /1117
Total Points Scored: 
8 /8
Your Total Score: 
2173
Total Time Taken: 
0.25
Your Accuracy: 
100%
Attempts No.: 
1

class Solution
{
public:
    
    vector<array<long long,2>> help(vector<int> &a){
      
      vector<array<long long,2>> st;
      
      int n=a.size();
      long long arr[n+1]={0};
      
      for(int i=0;i<n;++i)
      {
        arr[i]=a[i];
        if(i > 0)
        {
          arr[i]+= arr[i-1];
        }
      }
      
      st.push_back({0,0});
      
      for(int i=1;i<n;++i)
      {
        int l=1,h=i;
        long long value=2e18;
        array<long long,2> arr2;

        while(l<=h)
        {
          int midelPoint=(l+h)/2;
          long long P=arr[midelPoint-1];
          long long Q=arr[i]-P;

          if(abs(P-Q)<value)
          {
            value=abs(P-Q);
            arr2={P,Q};
          }
        
          if(P>Q)
              h=midelPoint-1;
          else
              l=midelPoint+1;
          
        }
        st.push_back(arr2);
      }
      return st;
    }

    long long minDifference(int N, vector<int> &A) {
        
        long long ans=2e18;
        
        auto P=help(A);
        
        reverse(A.begin(),A.end());
        
        auto Q=help(A);
        
        reverse(Q.begin(),Q.end());
        
        for(int i=1;i+2<N;++i)
        {
          ans=min(ans,max({P[i][0],P[i][1], Q[i+1][0],Q[i+1][1]}) - min({P[i][0],P[i][1], Q[i+1][0],Q[i+1][1]}));
        }
        
        return ans;
        
    }
};

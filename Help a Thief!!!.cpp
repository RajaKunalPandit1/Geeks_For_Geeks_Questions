Output Status : 

Problem Solved Successfully 
 Test Cases Passed:
111 / 111
Total Points Scored:
1/1
Total Time Taken:
0.26/13.12
Your Accuracy:
100%
Attempts No.:
1



class Solution {
  public:
    int maxCoins(int a[], int b[], int t, int n) {
        
        if(t == 0 || n == 0){
            return 0;
        }
        
        priority_queue<pair<int,int>> q;
        
        for(int i=0;i<n;i++){
            q.push({b[i],a[i]});
        }
        
        int res = 0;
        
        while(t>0 && !q.empty()){
            pair<int,int>p = q.top();
            q.pop();
            
            if(p.second <= t){
                res += (p.first*p.second);
                t -= p.second;
            }else{
                res += (p.first*t);
                t = 0;
            }
        }
        return res;
    }
};

// Another Solution 


bool com(pair<int,int>a,pair<int,int>b)
{
    return a.second>b.second;
}

class Solution {
  public:
    int maxCoins(int A[], int B[], int T, int N) {
        
        vector<pair<int,int>>v;
        
        for(int i=0; i<N; i++)
            v.push_back(make_pair(A[i],B[i]));
            
        sort(v.begin(),v.end(),com);
        
        int sum=0;
        auto it=v.begin();
        while(it!=v.end() && T>0)
        {
            if(T>=(*it).first)
            {
                sum+=(*it).first*(*it).second;
                T-=(*it).first;
            }
            else
            {
                sum+=(T*(*it).second);
                T=0;
            }
            it++;
        }
        
        return sum;
    }
};

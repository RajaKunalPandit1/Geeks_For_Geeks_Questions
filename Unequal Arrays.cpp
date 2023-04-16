Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1032 /1032
Total Points Scored: 
4 /4
Your Total Score: 
2183
Total Time Taken: 
0.61
Your Accuracy: 
100%
Attempts No.: 
1

  public:
  #define ll long long
    long long solve(int n, vector<int> &A, vector<int> &B) {
        
        vector<ll>evA,odA,evB,odB;
        sort(A.begin(),A.end());
        sort(B.begin(),B.end());
        for(int i=0;i<n;++i){
            if(A[i]%2)
                odA.push_back(A[i]);
            else
                evA.push_back(A[i]);
        }
        for(int i=0;i<n;++i){
            if(B[i]%2)
                odB.push_back(B[i]);
            else
                evB.push_back(B[i]);
        }
        if(evA.size()!=evB.size())
            return -1;
        ll inc=0,dec=0;
        bool ok = true;
        
        for(int i=0;i<evA.size();++i){
           
            ll dif=abs(evB[i]-evA[i]);
      
            if(dif%2){
                ok=false;
                break; 
            }
            if(evA[i]>=evB[i]){
                dec+=dif;
            }else{
                inc+=dif;
            }
        }
        for(int i=0;i<odA.size();++i){
            
            ll dif=abs(odB[i]-odA[i]);
           
            if(dif%2){
                ok=false;
                break; 
            }
            if(odA[i]>=odB[i]){
                dec+=dif;
            }else{
                inc+=dif;
            }
        }
        
        if(inc==dec and ok)
            return inc/2;
        return -1;
        
    }
};

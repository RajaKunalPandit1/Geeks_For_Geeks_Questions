Output Status : 

Problem Solved Successfully
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Test Cases Passed: 
115 /115
Your Total Score: 
2457
Total Time Taken: 
0.03
Correct Submission Count: 
3
Attempts No.: 
4

    vector<int> sieveOfEratosthenes(int n){
        
        vector<bool> isVis(n+1,true);
        
        vector<int> res;
        
        if(n == 1){
            return res;
        }
        
        for(int i=2;i<=n;i++){
            
            if(isVis[i]){
                res.push_back(i);
                
                for(int j=i*i;j<=n;j+=i){
                    isVis[j] = false;
                }
            }
        }
        
    }

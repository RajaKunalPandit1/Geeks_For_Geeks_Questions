Output Status : 

Problem Solved Successfully
Test Cases Passed: 
20010 /20010
Total Points Scored: 
2 /2
Your Total Score: 
2457
Total Time Taken: 
0.04
Your Accuracy: 
100%
Attempts No.: 
1

    void print_divisors(int n) {
        
        stack<int> res;
        
        for(int i=1;i*i<=n;i++){
            
            if(n%i == 0){
                cout<< i << " ";
                
                if(i != n/i){
                    res.push(n/i);
                }
            }
        }
        
        while(!res.empty()){
            cout<< res.top() << " ";
            res.pop();
        }
    }

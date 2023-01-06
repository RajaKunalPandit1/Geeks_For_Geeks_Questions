Output Status : 

Problem Solved Successfully
Test Cases Passed: 
145 /145
Total Points Scored: 
4 /4
Your Total Score: 
1787
Total Time Taken: 
0.08
Your Accuracy: 
100%
Attempts No.: 
1

class Solution{   
  public:
    const int N = 1e4+1;
    int shortestPath(int num1,int num2)
    {   
        if(num1 == num2){
            return 0;
        }
        vector<bool> primes(N,1);
        
        primes[0] = primes[1] = false;
        
        for(int i =2;i*i<N;i++){
            if(primes[i]){
                for(int j=i*i;j<N;j+= i){
                    primes[j] = false;
                }
            }
        }
        
        if(primes[num1]){
            queue<int> q;
            q.push(num1);
            primes[num1] = false;
            int res = 0;
            
            while(!q.empty()){
                for(int i=q.size();i>0;i--){
                    int curr = q.front();
                    q.pop();
                    if(curr == num2){
                        return res;
                    }
                    for(int num = 0;num < 10;num++){
                        int powers = 1;
                        for(int dig = 0;dig < 4;dig++){
                            if(dig == 3 && num == 0){
                                continue;
                            }
                            int newdig = curr/(powers * 10) * (powers * 10) + num * powers + curr % powers;
                            if(primes[newdig]){
                                primes[newdig] = false;
                                q.push(newdig);
                            }
                            powers *= 10;
                        }
                    }
                }
                res++;
            }
        }
        return -1;
    }
};

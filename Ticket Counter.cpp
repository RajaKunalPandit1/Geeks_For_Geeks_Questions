Output Status :

Problem Solved Successfully
Test Cases Passed: 
1115 /1115
Total Points Scored: 
2 /2
Your Total Score: 
2499
Total Time Taken: 
0.01
Your Accuracy: 
100%
Attempts No.: 
1

// Naive Sol :: Time : O(N) :: Aux_Space : O(N)

class Solution {
  public:
    int distributeTicket(int N, int K) {
            deque<int> dq;
    for (int i = 1; i <= N; i++) {
        dq.push_back(i);
    }
    int ans = 0;
    int turn = 0;
    while (dq.size() > 1) {
        if (turn == 0) {
            int in = 0;
            while (dq.size() > 1 && in < K) {
                ans = dq.front();
                dq.pop_front();
                in++;
            }
        } else {
            int in = 0;
            while (dq.size() > 1 && in < K) {
                ans = dq.back();
                dq.pop_back();
                in++;
            }
        }
        turn ^= 1;
    }
    return dq.front();
    }
};

// Efficient Sol :: Time : O(N) :: Aux_Space : O(1)

class Solution {
  public:
    int distributeTicket(int n, int k) {
        
        int s = 0,e = n+1;
        
        bool flag = true;
        
        while(s < e){
            
            int move = k;
            
            while(flag && s < e && move--){
                s++;
                if(e-s == 1) return s;
            }
            
            move = k;
            
            while(!flag && s < e && move--){
                e--;
                if(e-s == 1) return e;
            }
            
            if(e-s == 1 && flag) return s;
            if(e-s == 1 && !flag) return e;
            flag = !flag;
        }
        return -1;
    }
};

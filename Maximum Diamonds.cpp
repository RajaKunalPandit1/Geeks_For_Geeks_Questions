Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1115 /1115
Total Points Scored: 
2 /2
Your Total Score: 
2483
Total Time Taken: 
0.3
Your Accuracy: 
100%
Attempts No.: 
1


    long long maxDiamonds(int A[], int N, int K) {
        
        priority_queue<int> pq;
        
        for(int i=0;i<N;i++){
            pq.push(A[i]);
        }
        
        long long ans = 0;
        
        while(K-- && !pq.empty()){
            
            auto temp = pq.top();
            pq.pop();
            ans += temp;
            pq.push(temp/2);
            
        }
        return ans;
    }

Output Status : 

Problem Solved Successfully
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Test Cases Passed: 
1120 /1120
Your Total Score: 
2493
Total Time Taken: 
0.1
Correct Submission Count: 
3
Attempts No.: 
3

class Solution{
    public:
    
    unordered_map<int,int> mp;
    
    // Function to insert element into the queue
    void insert(queue<int> &q, int k){
        mp[k]++;
    }
    
    // Function to find frequency of an element
    // return the frequency of k
    int findFrequency(queue<int> &q, int k){
        
        if(mp[k] == 0) return -1;
        return mp[k];
    }
};

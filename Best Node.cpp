Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1124 /1124
Total Points Scored: 
4 /4
Your Total Score: 
2013
Total Time Taken: 
0.36
Your Accuracy: 
100%
Attempts No.: 
1

class Solution {

  public:
   long long bestNode(int N, vector<int> &A, vector<int> &P) {

        //Step-1 ..Create a set and push P array into set

        set<int> s;

        for(int i=0;i<N;i++){
            s.insert(P[i]);
        }
        //Step-2 ..Find out leaf nodes from s 

        vector<int> leaf_node;

        for(int i=1;i<=P.size();i++){

            if(!s.count(i)){
                leaf_node.push_back(i);
            }
        }

        long long ans = LLONG_MIN;

        for(int leaf : leaf_node){

            int curr_node = leaf;
            long long sum = 0;

            //-1 indicate the root

            while(curr_node!=-1) {
                sum = -sum;
                sum+=A[curr_node-1];

                ans = max(ans,sum);

                curr_node = P[curr_node-1];

            }
        }
        return ans;
    }
};


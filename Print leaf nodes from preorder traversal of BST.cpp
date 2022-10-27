Output Status : 

Problem Solved Successfully
Test Cases Passed: 
10010 /10010
Total Points Scored: 
4 /4
Your Total Score: 
1520
Total Time Taken: 
0.14
Your Accuracy: 
100%
Attempts No.: 
1

class Solution {
  public:
    vector<int> leaves;
    
    void rec(int l,int r, int arr[]){
        if(l>r) return;
        if(l == r){
            leaves.push_back(arr[l]);
            return;
        }
        
        int i;
        for(i=l+1;i<=r;i++){
            if(arr[i] > arr[l]){
                break;
            }
        }
        rec(l+1,i-1,arr);
        rec(i,r,arr);
    }
    
    vector<int> leafNodes(int arr[],int N) {
        
        int l=0,r=N-1;
        rec(l,r,arr);
        return leaves;
    }
};

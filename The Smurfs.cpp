Output Status : 

Problem Solved Successfully
Test Cases Passed: 
56 /56
Total Points Scored: 
4 /4
Your Total Score: 
1516
Total Time Taken: 
0.01
Your Accuracy: 
100%
Attempts No.: 
1

class Solution{
public:
    bool sameColor(int n, char arr[]){
        
        unordered_set<char> st;
        
        for(int i=0;i<n;i++){
            st.insert(arr[i]);
        }
        return (st.size() == 1);
    }

    int findMin(int n, char a[]){
        
        if(sameColor(n,a)) return n;
        
        int rc = 0,gc = 0,bc =  0;
        
        for(int i=0;i<n;i++){
            if(a[i] == 'R'){
                rc++;
            }else if(a[i] == 'G'){
                gc++;
            }else{
                bc++;
            }
        }
        
        if(rc%2 == 0 && gc%2 == 0 && bc%2 == 0){
            return 2;
        }else if(rc%2 == 1 && gc%2 == 1 && bc%2 == 1){
            return 2;
        }else{
            return 1;
        }
    }
};

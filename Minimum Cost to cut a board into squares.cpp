Output Status : 

Problem Solved Successfully
Test Cases Passed: 
190 /190
Total Points Scored: 
4 /4
Your Total Score: 
1334
Total Time Taken: 
0.02
Your Accuracy: 
50%
Attempts No.: 
2


class Solution {
public:
    int minimumCostOfBreaking(vector<int> x, vector<int> y, int M, int N){
        
        sort(x.begin(),x.end(),greater<int>());
        sort(y.begin(),y.end(),greater<int>());
        
        int n = x.size(), m = y.size();
        
        int i=0,j=0;
        
        int total = 0;
        
        while(i<n && j<m){
            
            if(x[i]>y[j]){
                
                total += x[i]*(j+1);
                i++;
            }else if(x[i] < y[j]){
                
                total += y[j]*(i+1);
                j++;
            }else{
                total += y[j]*(i+1);
                j++;
            }
        }
        
        while(i<n){
            
            total += x[i]*(j+1);
            i++;
        }
       
        while(j<m){
            
            total += y[j]*(i+1);
            j++;
        }
        return total;
    }
};

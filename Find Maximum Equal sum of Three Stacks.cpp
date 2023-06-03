Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1121 /1121
Total Points Scored: 
4 /4
Your Total Score: 
2392
Total Time Taken: 
0.43
Your Accuracy: 
100%
Attempts No.: 
1

class Solution{
public:
    int maxEqualSum(int n1,int n2,int n3,vector<int> &S1,vector<int> &S2,vector<int> &S3){
        
        int s1=0,s2=0,s3=0;
        
        for(int i=0;i<n1;i++) s1+=S1[i];
        for(int i=0;i<n2;i++) s2+=S2[i];
        for(int i=0;i<n3;i++) s3+=S3[i];
        
        int c1=0,c2=0,c3=0;
        
        while(1){      
            int x = min(s1,min(s2,s3));
            
            if(s1>x) s1-=S1[c1++];
            if(s2>x) s2-=S2[c2++];
            if(s3>x) s3-=S3[c3++];
            
            if(s1==s2 && s2==s3) return s1;
            
            if(c1==n1 || c2==n2 || c3==n3) return 0;
        }
        
    }
};

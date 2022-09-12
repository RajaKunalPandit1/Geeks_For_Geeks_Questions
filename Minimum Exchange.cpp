Output Status :

Problem Solved Successfully
Test Cases Passed: 
233 /233
Total Points Scored: 
2 /2
Your Total Score: 
1370
Total Time Taken: 
0.04
Your Accuracy: 
100%
Attempts No.: 
1

  
class Solution {
public:
int MinimumExchange(vector<vector<char>>matrix){
        
    int r=matrix.size();
   int c=matrix[0].size();
   vector<vector<char> > m1;
   vector<vector<char> > m2;
   bool mv=true;
   for(int i=0;i<r;i++){
       vector<char> mm1,mm2;
       bool mvv = mv;
       for(int j=0;j<c;j++){
           mm1.push_back(mvv?'A':'B');
           mm2.push_back(mvv?'B':'A');
           mvv=!mvv;
       }
       m1.push_back(mm1);
       m2.push_back(mm2);
       mv=!mv;
   }
   float count1=0,count2=0;
   for(int i=0;i<r;i++){
       for(int j=0;j<c;j++){
           if(m1[i][j]!=matrix[i][j]){
               count1++;
           }
           if(m2[i][j]!=matrix[i][j]){
               count2++;
           }
       }
   }
   int sh = count2<count1?count2:count1;
   if(sh%2!=0){
       return count2>count1?ceil(count2/2):ceil(count1/2);
   }
   return count2<count1?ceil(count2/2):ceil(count1/2);
        
  }
];

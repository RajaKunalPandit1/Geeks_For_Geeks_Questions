Output Status : 

Problem Solved Successfully
Test Cases Passed: 
142 /142
Total Points Scored: 
2 /2
Your Total Score: 
1901
Total Time Taken: 
3.53
Your Accuracy: 
100%
Attempts No.: 
1

class Solution{
    public:
    pair<int,int> endPoints(vector<vector<int>> matrix, int R, int C){
        
        int i=0;

       int j=0;

       int direction=0;

       

       int n=matrix.size();

       int m=matrix[0].size();

       

       while((i<n&&j<m)&&(i>=0&&j>=0))

       {

           if(matrix[i][j]==0)

           {

               if(direction==0)

               {

                   j++;

               }

               else if(direction==1)

               {

                   i++;

               }

               else if(direction==2)

               {

                   j--;

               }

               else if(direction==3)

               {

                   i--;

               }

           }

           else{

               matrix[i][j]=0;

               

               if(direction==0)

               {

                   i++;

                   direction=1;

               }

               else if(direction==1)

               {

                   j--;

                   direction=2;

               }

               else if(direction==2)

               {

                   i--;

                   direction=3;

               }

               else if(direction==3)

               {

                   j++;

                   direction=0;

               }

           }

       }

       

       if(i<0)

       {

           i++;

       }

       

       if(j<0)

       {

           j++;

       }

       

       if(i==n)

       {

           i--;

       }

       if(j==m)
       {

           j--;

       }
       pair<int,int> ans={i,j};

       return ans;
    }
};

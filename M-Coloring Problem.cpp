Output Status : 

Problem Solved Successfully
Test Cases Passed: 
179 /179
Total Points Scored: 
4 /4
Your Total Score: 
1283
Total Time Taken: 
0.05
Your Accuracy: 
100%
Attempts No.: 
1


public:
    // Function to determine if graph can be coloured with at most M colours such
    // that no two adjacent vertices of graph are coloured with same colour.
    bool cangivecolor(int in,int jthcol,int n,bool graph[101][101],vector<int>&color){
       for(int i=0;i<n;i++){
           if(graph[in][i]==1&&i!=in&&color[i]==jthcol){
               return false;
           }
       }
       return true;
   }
   bool dfs(bool graph[101][101], int m, int n,vector<int>&color,int ithnode){
       if(ithnode==n){
           return true;
       }
       for(int j=0;j<m;j++){
           if(cangivecolor(ithnode,j,n,graph,color)){
               color[ithnode]=j;
               if(dfs(graph,m,n,color,ithnode+1)){
                   return true;
               }
               color[ithnode]=-1;
           }
       }
       return false;
   }
   bool graphColoring(bool graph[101][101], int m, int n) {
       // your code here
       vector<int>color(n,-1);
       if(dfs(graph,m,n,color,0)) return true;
       return false;
    }
    
    

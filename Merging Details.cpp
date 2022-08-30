Output Status : 

Problem Solved Successfully
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Test Cases Passed: 
60 /60
Your Total Score: 
1324
Total Time Taken: 
0.03
Correct Submission Count: 
2
Attempts No.: 
2


class Solution {
  public:
    
    void dfs(map<string,vector<string>> graph,map<string,bool> &vis, string node, vector<string> & temp){
        
        temp.push_back(node);
        vis[node] = true;
        for(auto it: graph[node]){
            
            if(vis[it] == false){
                dfs(graph,vis,it,temp);
            }
        }
    }
  
    vector<vector<string>> mergeDetails(vector<vector<string>>& details) {
       
       map<string,bool> vis;
       map<string,vector<string>>graph;
       
       vector<vector<string>> res;
       
       for(auto i:details){
           
           int j=1;
           
           for(j=1;j<i.size()-1;j++){
               
               string u = i[j];
               string v = i[j+1];
               graph[u].push_back(v);
               graph[v].push_back(u);
           }
       }
       
       for(auto i: details){
           
           string name = i[0];
           
           if(vis[i[1]] == false){
               
               vector<string> temp;
               
               dfs(graph,vis,i[1],temp);
               sort(temp.begin(),temp.end());
               vector<string> keep;
               keep.push_back(name);
               
               for(auto it: temp){
                   
                   keep.push_back(it);
               }
               res.push_back(keep);
           }
       }
       sort(res.begin(),res.end());
       reverse(res.begin(),res.end());
       return res;
     
    }
};

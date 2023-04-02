Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1115 /1115
Total Points Scored: 
4 /4
Your Total Score: 
2129
Total Time Taken: 
0.98
Your Accuracy: 
100%
Attempts No.: 
1


class Solution{
public:
    int valid(int x,int y,int m,int n)
    {
        if(x>=0 && y>=0 && x<m && y<n)
        {
            return 1;
        }
        return 0;
    }
    void f(int x,int y,vector<vector<int>>&arr,int st,vector<vector<int>>&vis,map<int,int>&mp)
    {
        int indx[8]={-2,-2,2,2,-1,1,-1,1};
        int indy[8]={-1,1,-1,1,2,2,-2,-2};
        queue<vector<int>>q;
        q.push({x,y});
        vis[x][y]=1;
        int ct=0;
        while(!q.empty())
        {
            int sz=q.size();
            for(int j=0;j<sz;j++)
            {
                auto xyz=q.front();
                int xx=xyz[0];
                int yy=xyz[1];
                mp[ct]+=arr[xx][yy];
                q.pop();
                 for(int i=0;i<8;i++)
                {
                    if(valid(xx+indx[i],yy+indy[i],arr.size(),arr[0].size()) && !vis[xx+indx[i]][yy+indy[i]])
                    {
                       q.push({xx+indx[i],yy+indy[i]});
                       vis[xx+indx[i]][yy+indy[i]]=1;
                    }
                } 
            }
            ct++;
        }
    }
    int knightInGeekland(int start_x,int start_y,vector<vector<int>> &arr){
        int m=arr.size();
        int n=arr[0].size();
        
    map<int,int>mp;
        vector<vector<int>>vis(m+1,vector<int>(n+1,0));
        vis[start_x][start_y]=1;
        f(start_x,start_y,arr,0,vis,mp);
        mp[0]=arr[start_x][start_y];
        auto it=mp.end();
        while(it!=mp.begin())
        {
           mp[it->first]=mp[it->first]+mp[it->first+it->second];
           it--;
        }
        mp[it->first]=mp[it->first]+mp[it->first+it->second];
        int ans=0,mx=-1;
        for(auto it:mp)
        {
            if(mx<it.second)
            {
                mx=it.second;
                ans=it.first;
            }
        }
        return ans;
    }
};

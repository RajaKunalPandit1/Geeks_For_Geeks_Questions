Output Status : 

Problem Solved Successfully
Test Cases Passed: 
42 /42
Total Points Scored: 
4 /4
Your Total Score: 
2830
Total Time Taken: 
0.57
Your Accuracy: 
100%
Attempts No.: 
1

int minimumMultiplications(vector<int>& arr, int start, int end) {
        
        queue<int>q;
        q.push(start);
        
        vector<bool>visited(1e5,false);
        
        visited[start]=true;
        
        int step=0;
        
        int m=1e5;
       
        while(!q.empty())
        {
            int size=q.size();
            while(size--)
            {
                int x=q.front();
                q.pop();
                if(x==end)return step;
                for(int i=0;i<arr.size();i++)
                {
                    int y=(x*arr[i])%m;
                    if(visited[y]==false)
                    {
                       visited[y]=true;
                        q.push(y);
                    }
                }
            }
            step++ ;
        }
        
        return -1 ;
    }

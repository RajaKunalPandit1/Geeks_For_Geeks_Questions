Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1120 /1120
Total Points Scored: 
8 /8
Your Total Score: 
2603
Total Time Taken: 
0.97
Your Accuracy: 
100%
Attempts No.: 
1

long long minTime(int n, vector<int> &locations, vector<int> &types) {
        vector<int> dp(100001,false);
        vector<pair<int,int>> exts(100001,{INT_MIN,INT_MIN});
        for(int i=0;i<n;++i)
        {
            dp[types[i]]=true;
            if(exts[types[i]].first==INT_MIN)
            {
                exts[types[i]].first=exts[types[i]].second=locations[i];
            }
            else
            {
                if(locations[i]<exts[types[i]].first)exts[types[i]].first=locations[i];
                if(locations[i]>exts[types[i]].second)exts[types[i]].second=locations[i];
            }
        }
        vector<pair<int,int>> v;
        v.push_back({0,0});
        for(int i=0;i<100001;++i)
        {
            if(dp[i])
            {
                v.push_back(exts[i]);
            }
        }
        // for(auto x:v)cout<<x.first<<"  "<<x.second<<endl;
         n=v.size();
        --n;
        long long c=0;
        vector<vector<long long int>> dyp(n+1,vector<long long int>(2));
        int cur=0;
        dyp[1][0]=(abs(cur-v[1].second))+(abs(v[1].second-v[1].first));
        dyp[1][1]=(abs(cur-v[1].first))+(abs(v[1].second-v[1].first));
        for(int i=2;i<=n;++i)
        {
            dyp[i][0]=min(
                (dyp[i-1][0]+abs(v[i-1].first-v[i].second)+abs(v[i].second-v[i].first)),
                (dyp[i-1][1]+abs(v[i-1].second-v[i].second)+abs(v[i].second-v[i].first))
            );
            dyp[i][1]=min(
                (dyp[i-1][0]+abs(v[i-1].first-v[i].first)+abs(v[i].second-v[i].first)),
                (dyp[i-1][1]+abs(v[i-1].second-v[i].first)+abs(v[i].second-v[i].first))
            );
        }
        return min((dyp[n][0]+abs(v[n].first)),(dyp[n][1]+abs(v[n].second)));
    }

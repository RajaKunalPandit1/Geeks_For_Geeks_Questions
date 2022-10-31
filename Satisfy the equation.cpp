Output Status : 

Problem Solved Successfully
Test Cases Passed: 
112 /112
Total Points Scored: 
4 /4
Your Total Score: 
1536
Total Time Taken: 
4.58
Your Accuracy: 
100%
Attempts No.: 
1


class Solution {
 public:
    vector<int> satisfyEqn(int a[], int n) {
         unordered_map<int, set<pair<int,int>>>mp;
        for(int i = 0 ; i < n ; i++ ){
            for(int j = 0 ; j < n ; j++ ){
                if( i != j )
                    mp[a[i]+a[j]].insert( {i, j} ) ;
            }
        }
        
        for(int i = 0 ; i < n ; i++ ){
            for(int j = i+1 ; j < n ; j++ ){
                int tar = a[i] + a[j] ;
                if( mp.find(tar) != mp.end() ){
                    for( auto it : mp[tar] ){
                        if( it.first == i || it.first == j )
                            continue ;
                        if( it.second == i || it.second == j )
                            continue ;
                        
                        return { i, j, it.first, it.second } ;
                    }  
                }
            }
        }
        return {-1, -1, -1, -1} ;
    }
};

Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1010 /1010
Total Points Scored: 
4 /4
Your Total Score: 
2187
Total Time Taken: 
0.05
Your Accuracy: 
100%
Attempts No.: 
1

/*
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};
*/

class Solution 
{
    public:
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job a[], int n) 
    { 
        sort(a, a + n, [](Job &x, Job &y){
            return (x.profit > y.profit);
        });
        int cnt = 0, mxpro = 0, lst = -1;
        for(int i = 0; i < n; i++) lst = max(lst, a[i].dead);
        vector<int> vis(lst + 1);
        for(int i = 0; i < n; i++){
            for(int j = a[i].dead; j > 0; j--){
                if(!vis[j]){
                    vis[j] = 1, cnt++, mxpro += a[i].profit; break;
                }
            }
        }
        return {cnt, mxpro};
    } 
};

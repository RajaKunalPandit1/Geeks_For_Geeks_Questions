Output Status : 

Runtime: 487 ms, faster than 18.07% of C++ online submissions for Maximum Profit in Job Scheduling.
Memory Usage: 63.2 MB, less than 29.87% of C++ online submissions for Maximum Profit in Job Scheduling.

class Solution {
public:
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        int n = startTime.size();
        vector<vector<int>> table(n, vector<int>(3));
        vector<int> ends(n+1,0);
        unordered_map<int, int> sum;

        for(int i = 0; i != n; i++)
          ends[i] = table[i][1] = endTime[i], table[i][0] = startTime[i], table[i][2] = profit[i];

        sort(ends.begin(), ends.end());
        sort(table.begin(), table.end(), [](vector<int> &a, vector<int> &b)->bool {return a[0] < b[0];});

        int i = 0, j = 0, answer = 0;

        while(true){
          answer = max(answer, sum[ends[i]]);
          if(i++ == n) break;
          while(j != n && table[j][0] < ends[i])
            sum[table[j++][1]] = max(sum[table[j][1]], table[j][2] + answer);
        }

        return answer;  
    }
};

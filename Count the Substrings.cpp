Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1115 /1115
Total Points Scored: 
2 /2
Your Total Score: 
2119
Total Time Taken: 
0.03
Your Accuracy: 
50%
Attempts No.: 
2

class Solution
{
    public:
    int countSubstring(string S)
    {
        unordered_map<int, int> map;
    // initialize the map with the value of 'sum' = 0 (the empty string)
    map[0] = 1;
    // initialize the number of valid substrings to 0
    int ans = 0;
    // initialize the value of 'sum' to 0
    int sum = 0;
    // loop through each character in the string
    for (char ch : S) {
        int val;
        // if the character is uppercase, add 1 to 'sum'
        if (isupper(ch)) {
            val = 1;
        }
        // if the character is lowercase, subtract 1 from 'sum'
        else {
            val = -1;
        }
        // update the value of 'sum'
        sum += val;
        // if the current value of 'sum' has been encountered before,
        // add the number of times it has been encountered to 'ans'
        if (map.find(sum) != map.end()) {
            ans += map[sum];
        }
        // increment the count of the current value of 'sum'
        map[sum]++;
    }
 
    return ans;
        
    }
};

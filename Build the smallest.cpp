Output Status : 

Problem Solved Successfully
Test Cases Passed: 
165 /165
Total Points Scored: 
4 /4
Your Total Score: 
1699
Total Time Taken: 
0.13
Your Accuracy: 
100%
Attempts No.: 
1

string buildLowestNumber(string num, int k)
{
     stack<char>s;

    int n = num.size();

    s.push(num[0]);

    for(int i=1;i<n;i++) {

        while(!s.empty() and s.top() > num[i] and k!=0) {

            s.pop();

            k--;

        }

        s.push(num[i]);

    }

    string ans;

    while(!s.empty()) {

        char c = s.top();

        s.pop();

        if(k > 0) {

            k--;

            continue;

        }

        ans += c;

    }

    reverse(ans.begin(),ans.end());

    for(int i=0;i<ans.size();i++){

        if(ans[i] != '0') {
            ans = ans.substr(i);
            return ans;
        }
    }

    return "0";
}

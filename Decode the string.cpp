Output Status : 

Problem Solved Successfully
Test Cases Passed: 
205 /205
Total Points Scored: 
4 /4
Your Total Score: 
1460
Total Time Taken: 
0.03
Your Accuracy: 
100%
Attempts No.: 
1


class Solution{
public:
    string decodedString(string s){
        
        stack<string>st;

      string ans="";

        for(int i=0;i<s.size();i++){
            if(s[i]==']')
            {
                string alpha="";

                while(!st.empty() && st.top()!="["){
                     alpha+=st.top();st.pop();
                }

                string num="";
                st.pop();

                while(!st.empty() && (st.top()>="0" && st.top()<="9" ))
                {
                    num+=st.top();st.pop();
                }

                reverse(num.begin(),num.end());
                string t="";
                int n=stoll(num);

                while(n!=0)

                {
                    n--;
                    t+=alpha;
                }

                st.push(t);
            }

            else{
                string a="";a+=s[i];
                st.push(a);
            }
        }

       while(!st.empty()){
           ans+=st.top();
           st.pop();
       }

        reverse(ans.begin(),ans.end());

        return ans;
    }
};

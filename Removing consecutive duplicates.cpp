Output Status:

Problem Solved Successfully 
Total Points Scored:
2/2
Total Time Taken:
0.1/1.1
Your Accuracy:
100%
Attempts No.:
1


class Solution
{
    public:
    //Function to remove consecutive duplicates from given string using Stack.
    string removeConsecutiveDuplicates(string s)
    {
        
        string res;
        int n = s.length();
        stack<char> st;
        
        
        for(int i=0;i<n;i++){
            if(st.empty()){
                st.push(s[i]);
            }else{
                if(st.top() == s[i]){
                    st.pop();
                    st.push(s[i]);
                }else{
                    st.push(s[i]);
                }
            }
        }
        while(!st.empty()){
            res+= st.top();
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
        
    }
};

// Another Solution 


class Solution
{
    public:
    //Function to remove consecutive duplicates from given string using Stack.
    string removeConsecutiveDuplicates(string s)
    {
        string answer="";
        stack<char>st;
        
        //pushing the first character of the string into the stack.   
        st.push(s[0]);
        
        //iterating over the string.
        for(int i=1;i<s.length();i++)
        {
            //if current character of string is equal to the character at top 
            //of stack, we continue iterating in the loop.
            if(s[i]==st.top())
                continue;
            //else we add the character at top of stack to the answer
            //and push the current character into the stack.
            else
            {
                answer+=st.top();
                st.pop();
                st.push(s[i]);
            }
        }
        
        //adding character at the top of stack to the answer and returning it.
        answer+=st.top();
        return answer;
    }
};

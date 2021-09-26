Output Status:

Problem Solved Successfully 
Total Points Scored:
4/4
Total Time Taken:
0.1/1.5
Your Accuracy:
100%
Attempts No.:
1


class Solution

{
 public:
   string reverseWords (string s)
   {
       int n = s.length();
       stack<char> st;
       string res;
       
       for(int i=0;i<n;i++){
           if(s[i]!='.'){
               st.push(s[i]);
           }else{
               while(!st.empty()){
                   res+= st.top();
                   st.pop();
               }
               res+= '.';
           }
       }
       
       while(!st.empty()){
           res+= st.top();
           st.pop();
       }
       
       return res;
       
   }
};


// Another Solution

class Solution
{
  public:
    string reverseWords (string s)
    {
        int n = s.length ();
        stack <char> st;
    
        string res = "";
        int i = 0;
        while (i < n)
        {
            // if we get a dot, we append the previous word in the string
            // no need to reverse as we used a stack
            if (s[i] == '.')
            {
                while (!st.empty ())
                {
                    res += st.top ();
                    st.pop ();
                }
                res += '.';
            }
            
            // we got a new character of the current word
            else
                st.push (s[i]);
            i++;
        }
        
        // appending the last word (that occurs after the last dot)
        while (!st.empty ())
        {
            res += st.top ();
            st.pop ();
        }
        return res;
    }

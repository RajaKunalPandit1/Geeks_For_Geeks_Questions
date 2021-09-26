Output Status:

Problem Solved Successfully 
Total Points Scored:
2/2
Total Time Taken:
0.0/1.1
Your Accuracy:
100%
Attempts No.:
1
  
  class Solution
{
  public:
    string reverseEqn (string s)
        {
            stack<string> st;
            string res;
            int n = s.length();
        
            for(int i=0;i<n;i++){
                if(isdigit(s[i])){
                    string aux;
                    aux+= s[i];
                    while(i+1<n && isdigit(s[i+1])){
                        aux+=s[i+1];
                        i++;
                    }
                    st.push(aux);
                }else{
                    string aux;
                    aux+= s[i];
                    st.push(aux);
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
    string reverseEqn (string s)
        {
            string res = "";
            int n = s.length ();
            int i = n - 1;
        
            stack <char> st;
            
            // traversing the string in reverse
            while (i >= 0)
            {
                // we traversed the string in reverse and pushed the characters in the stack
                // this is basically equaivalent to 2 reversals. Hence, we get the 
                // numbers/variables in their correct order.
                // for eg, say we have 20
                // stack becomes: 0 2 <- top
                // now, pushing the number in our result, we'll have 20
                if (s[i] == '+' or s[i] == '-' or s[i] == '*' or s[i] == '/')
                {
                    while (!st.empty ())
                    {
                        res += st.top ();
                        st.pop ();
                    }
                    res += s[i];
                }
                else
                    st.push (s[i]);
                i--;
            }
            
            // appending the last number/variable if any
            while (!st.empty ())
            {
                res += st.top ();
                st.pop ();
            }
            
            return res;
        }
        // Contributed By: Pranay Bansal

};

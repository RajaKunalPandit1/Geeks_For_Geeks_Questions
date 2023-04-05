Output Status : 

Your Answer is correct !

bool isSame(char a, char b){
    
    return((a == '(' && b == ')') || (a == '[' && b == ']') || (a == '{' && b == '}'));
    
}

int Solution::solve(string s) {
    
    stack<char> st;
    
    for(int i=0;i<s.length();i++){
        
        if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
            st.push(s[i]);
        }else{
            if(!st.empty() && isSame(st.top(),s[i])){
                st.pop();
            }else{
                return 0;
            }
        }
    }
    return (st.empty()?1:0);
}

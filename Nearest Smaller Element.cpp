Output Status : 

Your Answer is correct !


vector<int> Solution::prevSmaller(vector<int> &arr) {
    
    int n = arr.size();
    stack<int> st;
    vector<int> res(n,-1);
    
    st.push(arr[0]);
    
    for(int i=1;i<n;i++){
        
        while(!st.empty() && st.top() >= arr[i]){
            st.pop();
        }
        
        int temp = st.empty()?-1:st.top();
        res[i] = temp;
        st.push(arr[i]);
    }
    return res;
}

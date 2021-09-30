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
  
  
  //Function to push all the elements into the stack.
stack<int> _push(int arr[],int n)
{
    stack<int> st;
    int min =0;
    for(int i=0;i<n;i++){
        
        if(st.empty()){
            min = arr[i];
        st.push(arr[i]);
    }else{
        if(arr[i]<st.top()){
            st.push(arr[i]);
            min= arr[i];
        }else{
            st.push(min);
        }
    }

}
    return st;
}

//Function to print minimum value in stack each time while popping.
void _getMinAtPop(stack<int>s)
{
   
   while(!s.empty()){
       cout<< s.top() << " ";
       s.pop();
   }
   
}

// Another Solution 


// Back-end complete function Template for C++


//Function to push all the elements into the stack.
stack<int> _push(int arr[],int n)
{
    stack <int>s;
    
    //iterating over the array elements and pushing them into the stack.
    for(int i=0;i<n;i++)
    {
        s.push(arr[i]);
    }
    return s;
}

//Function to print minimum value in stack each time while popping.
void _getMinAtPop(stack<int>s)
{
    std::vector<int>v;
    
    //pushing all the elements of stack in a list.
    while(!s.empty())
    {
        v.push_back(s.top());
        s.pop();
    }
    stack<int>minStack;
    
    //pushing the last element of list in original stack and minStack.
    s.push(v.back());
    minStack.push(v.back());
    
    //iterating over the list from second last element in backward direction.
    for(int i=v.size()-2;i>=0;i--)
    {
        //pushing the current element in original stack.
        s.push(v[i]);
        
        //comparing the top element of original stack with top element of 
        //minStack and pushing the minimum value into minStack.
        if(s.top()<minStack.top())
        minStack.push(s.top());
        else
        minStack.push(minStack.top());
    }
    
    //printing all the elements in minstack one by one.
    while(!s.empty())
    {
        cout<<minStack.top()<<" ";
        s.pop();
        minStack.pop();
    }
    
}

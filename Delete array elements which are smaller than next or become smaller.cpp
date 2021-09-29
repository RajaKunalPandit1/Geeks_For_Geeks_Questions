Output Status:

Problem Solved Successfully 
Total Points Scored:
2/2
Total Time Taken:
0.3/2.2
Your Accuracy:
25%
Attempts No.:
4


vector<int> deleteElement(int arr[],int n,int k)
{
    stack<int> s;
    
    s.push(arr[0]);
    int count = 0;
    
    for(int i=1;i<n;i++){
        while(!s.empty() && arr[i]>s.top() && count<k){
            s.pop();
            count++;
        }
        s.push(arr[i]);
    }
    
    vector<int> res;
    
    while(!s.empty()){
        res.push_back(s.top());
        s.pop();
    }
    reverse(res.begin(),res.end());
    
    return res;
}


// Another Solution:

vector<int> deleteElement(int arr[],int n,int k)
{
    stack<int>s;
    s.push(arr[0]);
    int countt=0;
    for(int i=1;i<n;i++)
    {
        while(!s.empty() && s.top()<arr[i] && countt<k)
            {
                s.pop();
                countt++;
            }
        s.push(arr[i]);
    }
    int m=s.size();
    vector<int>v(m);
    while(!s.empty())
    {
        //cout<<s.top()<<endl;
        v[--m]=s.top();
        s.pop();
    }
    return v;
    
}

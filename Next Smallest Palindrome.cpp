Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1130 /1130
Total Points Scored: 
8 /8
Your Total Score: 
2778
Total Time Taken: 
0.31
Your Accuracy: 
100%
Attempts No.: 
1
	    vector<int> f(vector<int>ans,int m,int n)
    {
        int c=0,j=m;
    if(ans[j]==9)
    {
        ans[j]=0;
        c=1;
    }
    else ans[j]++;
    j--;
    while(c && j>=0)
    {
        int res=ans[j]+c;
        ans[j]=(res)%10;
        c=res/10;
        j--;
    }
    if(c) ans.insert(ans.begin(),1);
    if(n%2)
    {
        for(int i=m-1;i>=0;i--) ans.push_back(ans[i]);
    }
    else
    {
        for(int i=m;i>=0;i--) ans.push_back(ans[i]);
    }
    return ans;
    }
vector<int> generateNextPalindrome(int num[], int n) {
    if(n==1 && num[0]==9) return {1,1}; 
    vector<int>ans,v;
    int m=(n-1)/2,j=m;
    for(int i=0;i<=m;i++) ans.push_back(num[i]);
    v=ans;
    bool c=false;
    if(n%2) j--;
    for(int i=j;i>=0;i--)
    {
        v.push_back(v[i]);
        if(c) continue;
        if(v.back()>num[v.size()-1]) c=true;
        if(v.back()<num[v.size()-1]) break;
    }
    if(!c) return f(ans,m,n);
    return v;
	}

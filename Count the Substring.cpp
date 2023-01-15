Output Status : 

Problem Solved Successfully
Test Cases Passed: 
125 /125
Total Points Scored: 
8 /8
Your Total Score: 
1829
Total Time Taken: 
0.47
Your Accuracy: 
100%
Attempts No.: 
1

class BIT
{
private:
    vector<int> bit;

public:
    BIT(int size = 0)
    {
        bit.assign(size + 1, 0);
    }
    int getsum(int idx)
    {
        int sum = 0;
        for (; idx > 0; idx -= idx & (-idx))
            sum += bit[idx];
        return sum;
    }
    void addvalue(int idx, int val)
    {
        for (; idx < bit.size(); idx += idx & (-idx))
        {
            bit[idx] += val;
        }
    }
};
class Solution{
public:
  long long countSubstring(string S){
      int n=S.size();
      BIT *b=new BIT(n);
    vector<long long int>pre(n,0);
    pre[0]=S[0]=='0'?-1:1;
    for(int i=1;i<n;i++){
        pre[i]=pre[i-1]+(S[i]=='0'?-1:1);
    }
    map<long long,int>mp;
    for(int i=0;i<n;i++){
        mp[pre[i]]++;
    }
    long long int l=1;
    for(auto &el:mp){
        el.second=l++;
    }
    long long ans=0;
    for(int i=0;i<n;i++){
        if(pre[i]>0)ans++;
        ans+=b->getsum(mp[pre[i]]-1);
        b->addvalue(mp[pre[i]],1);
    }
    return ans;
  }
};

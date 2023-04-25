Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1120 /1120
Total Points Scored: 
4 /4
Your Total Score: 
2215
Total Time Taken: 
0.48
Your Accuracy: 
100%
Attempts No.: 
1

class Solution
{
public:
    vector<int> nearestSmallerTower(vector<int> arr)
    {
        
        int n = arr.size();
        vector<int>a(n,-1);
        stack<pair<int,int>>st;
        for(int i=0;i<n;i++)
        {
           
             while(st.empty()!=true&&st.top().first>=arr[i])
            {
                st.pop();
            }
             if(st.empty()==true)
            {
                st.push({arr[i],i});
                continue;
            }
            if(st.top().first<arr[i])
            {
                a[i] = st.top().second;
            }
            st.push({arr[i],i});
        }
        while(st.empty()!=true)
        {
            st.pop();
        }
        for(int i=n-1;i>=0;i--)
        {
          
            while(st.empty()!=true&&st.top().first>=arr[i])
            {
                st.pop();
            }
               if(st.empty()==true)
            {
                st.push({arr[i],i});
                continue;
            }
            if(st.top().first<arr[i])
            {
                if(a[i]==-1)
                {
                     a[i] = st.top().second;
                }
                else
                {
                int b = abs(i-a[i]);
                int c = abs(i-st.top().second);
                if(c==b)
                {
                    if(arr[a[i]]>st.top().first)
                    {
                         a[i] = st.top().second;
                    }
                }
                else if(b>c)
                {
                     a[i] = st.top().second;
                }
                }
            }
            st.push({arr[i],i});
            
        }
        return a ;
    }
};

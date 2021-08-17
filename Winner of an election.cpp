Output Status:
Problem Solved Successfully 
Total Points Scored:
2/2
Total Time Taken:
0.1/1.3
Your Accuracy:
50%
Attempts No.:
2



class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
        unordered_map <string,int> mp;
        
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
    
        int max1 =0;
        string str;
        
        for(auto x:mp){
            
            if(x.second>max1){
                max1 = x.second;
                str = x.first;
            }else if((x.second == max1) && str>x.first)
                str = x.first;
            
        }
        
        return {str, to_string(max1)};
    
    }
};

// Another Solution 

class Solution{
  public:
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
            //using map to store count of votes for each name.
            unordered_map<string,int>mp;
            
            //storing the frequency of names in the map.
            for(int j=0;j<n;j++)
            {
                mp[arr[j]]++;
            }
            
            int maxx=-1;
            string answer="";
            
            //iterating through the map to find the name with highest frequency.
            for(auto it=mp.begin();it!=mp.end();it++)
            {
                //updating answer whenever we get any name with frequency 
                //greater than frequency of name stored previously.
                if(it->second>maxx)
                {
                    maxx=it->second;
                    answer=it->first;
                }
                //if frequency of current name is same as the previously 
                //stored name then we compare both names and store 
                //lexicographically smaller name.
                else if(it->second == maxx && answer.compare(it->first) > 0)
                    answer = it->first;
            }
            //storing name with highest votes and the number of votes in a list.
            vector<string> vec = {answer,to_string(maxx)};
            
            //returning the list.
            return vec;
    }
};

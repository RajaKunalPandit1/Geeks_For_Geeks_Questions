Output Status:
Problem Solved Successfully 
Total Points Scored:
2/2
Total Time Taken:
0.3/1.5
Your Accuracy:
100%
Attempts No.:
1
  
  // Solution Using Set
  
  class Solution
{
  public:
    //Function to find the minimum indexed character.
    int minIndexChar(string str, string patt)
    {
        
        unordered_set <char> s;
        
        for(int i=0;i<patt.length();i++){
            s.insert(patt[i]);
        }
        
        for(int i=0;i<str.length();i++){
            if(s.find(str[i])!=s.end()){
                return i;
            }
        }
        return -1;
        
    }
};


// Solution Using Map

class Solution
{
  public:
    //Function to find the minimum indexed character.
    int minIndexChar(string str, string patt)
    {
        const int CHAR = 256;
        int visited[CHAR];
        fill(visited,visited+CHAR,-1);
        
        for(int i=0;i<str.length();i++){
             if(visited[str[i]] == -1){
                 visited[str[i]] = i;
             }
        }
        
        int res = INT_MAX;
        
        for(int i=0;i<patt.length();i++){
            
            if(visited[patt[i]]!= -1){
                res = min(res,visited[patt[i]]);
            }
            
        }
        
        if(res == INT_MAX){
            return -1;
        }else{
            return res;
        }
        
    }
};


// Another Solution 

class Solution
{
  public:
    //Function to find the minimum indexed character.
    int minIndexChar(string str, string patt)
    {
    	//using a map as hash table to store first index of all characters.
    	unordered_map<char, int> um;
    	int minIndex = INT_MAX;
    
    	int m = str.size();
    	int n = patt.size();
    
    	//storing first index of each character of string "str" in hash table.
    	for (int i = 0; i < m; i++)
    		if (um.find(str[i]) == um.end())
    			um[str[i]] = i;
    
    	//iterating over the second string "patt".
    	for (int i = 0; i < n; i++)
        {
    		//if current character of string "patt" is found in hash table,
    		//we check if it has the minimum index or not.
    		if (um.find(patt[i]) != um.end() && um[patt[i]] < minIndex)
    		{
    		    //updating minimum index.
    			minIndex = um[patt[i]];
    		}
        }
    
    	//returning the minimum indexed character or -1 if no 
    	//character of "patt" is present in "str".
    	if (minIndex != INT_MAX)
    		return minIndex;
    	else
    		return -1;
    }
};

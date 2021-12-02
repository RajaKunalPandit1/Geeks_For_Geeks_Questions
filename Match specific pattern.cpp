Output Status: 

Problem Solved Successfully 
Total Points Scored:
2/2
Total Time Taken:
0.0/1.8
Your Accuracy:
100%
Attempts No.:
1


/* The function returns a  vector of strings 
present in the dictionary which matches
the string pattern.
You are required to complete this method */
vector<string> findMatchedWords(vector<string> dict,string pattern)
{
      
     map<char,int> mp1;
      
      for(int i=0;i<pattern.size();i++){
          mp1[pattern[i]]++;
      }
      
      vector<string> res;
      
      for(int i=0;i<dict.size();i++){
          
          string str = dict[i];
          map<char,int> mp2;
          if(pattern.size() == str.size()){
              for(int i=0;i<str.size();i++){
                  mp2[str[i]]++;
              }
          }
          
        auto ptr = mp2.begin();
      
      bool flag = false;
      
      for(auto it = mp1.begin(); it!= mp1.end(); it++,ptr++){
          if(ptr->second == it->second){
              flag = true;
          }else{
              flag = false;
              break;
          }
      }
        if(flag){
          res.push_back(dict[i]);
        }
          
      }
      
      return res;
      
      
}

// Another Solution 


string encodeString(string str)
{
    unordered_map<char, int> map;
    string res = "";
    int i = 0;
 
    for (char ch : str)
    {
        if (map.find(ch) == map.end())
            map[ch] = i++;

        res += to_string(map[ch]);
    }
 
    return res;
}
 

vector<string> findMatchedWords(vector<string> dict,string pattern)
{
    int len = pattern.length();

    string hash = encodeString(pattern);
 
 	vector<string> res;
 	
    for(int i=0;i<dict.size();i++)
    {
       if (dict[i].length() == len && encodeString(dict[i]) == hash)
            res.push_back(dict[i]);
    }

    return res;
}

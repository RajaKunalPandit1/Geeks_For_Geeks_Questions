Output Status : 

Problem Solved Successfully 
 Test Cases Passed:
140 / 140
Total Points Scored:
4/4
Total Time Taken:
2.13/3.18
Your Accuracy:
100%
Attempts No.:
1


class Solution {

    public:
    int findSubString(string str)
    {
        set<char> st;
        
        int n = str.length();
        
        for(int i=0;i<str.length();i++){
            st.insert(str[i]);
        }   
        int m = st.size();
        
        unordered_map<char,int> mp;
        
        int j=0,i=0,ans = n;
        
        while(i<n){
            mp[str[i]]++;
            if(mp.size() == m){
                
                while(mp[str[j]]>1){
                    mp[str[j]]--;
                    j++;
                }
                ans = min(ans,i-j+1);
            }
            i++;
        }
        return ans;
    }
};

// Another Solution : 

class Solution{
    public:
    const int no_of_chars = 256;
    // Function to find smallest window containing
    // all characters of 'pat'
    int findSubString(string str) {
        
        int len1 = str.length();
        string pat = "";
        
        set<char> s;
        for (int i = 0; i < len1; i++) 
            s.insert(str[i]);
        for (auto i = s.begin(); i != s.end(); i++) 
            pat += (*i);
                
        int len2 = pat.length();
    
        // check if string's length is less than pattern's
        // length. If yes then no such window can exist
        if (len1 < len2) {
            return 0;
        }
    
        int hash_pat[no_of_chars] = {0};
        int hash_str[no_of_chars] = {0};
    
        // store occurrence ofs characters of pattern
        for (int i = 0; i < len2; i++) hash_pat[pat[i]]++;
    
        int start = 0, start_index = -1, min_len = INT_MAX;
    
        // start traversing the string
        int count = 0; // count of characters
        for (int j = 0; j < len1; j++) {
            // count occurrence of characters of string
            hash_str[str[j]]++;
    
            // If string's char matches with pattern's char
            // then increment count
            if (hash_pat[str[j]] != 0 && hash_str[str[j]] <= hash_pat[str[j]])
                count++;
    
            // if all the characters are matched
            if (count == len2) {
                // Try to minimize the window i.e., check if
                // any character is occurring more no. of times
                // than its occurrence in pattern, if yes
                // then remove it from starting and also remove
                // the useless characters.
                while (hash_str[str[start]] > hash_pat[str[start]] ||
                       hash_pat[str[start]] == 0) {
    
                    if (hash_str[str[start]] > hash_pat[str[start]])
                        hash_str[str[start]]--;
                    start++;
                }
    
                // update window size
                int len_window = j - start + 1;
                if (min_len > len_window) {
                    min_len = len_window;
                    start_index = start;
                }
            }
        }
    
        // If no window found
        if (start_index == -1) {
            return 0;
        }
    
        // Return substring starting from start_index
        // and length min_len
        return str.substr(start_index, min_len).size();
    }
};

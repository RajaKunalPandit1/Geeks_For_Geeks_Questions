Output Status:
Problem Solved Successfully 
Total Points Scored:
1/1
Total Time Taken:
0.0/1.5
Your Accuracy:
100%
Attempts No.:
1
  
  
  class Solution {
  public:
    string removeChars(string string1, string string2) {
        
        unordered_map<int,int> m;
        
        
        int p = string2.length();
        
        for(int i=0;i<p;i++){
            m[string2[i]]++;
        }
        
        int n = string1.length();
        string str;
        for(int i=0;i<n;i++){
            if(m[string1[i]] == 0){
                str+= string1[i];
            }
        }
        
        return str;
    }
};


// Another Solution 

class Solution {
  public:
    string removeChars(string string1, string string2)
{
     string result;
     int i,j,l1,l2;
   
     l1=string1.length();
     l2=string2.length();
   
     int hash[257];
     for(i=0;i<257;i++)
         hash[i]=0;
   
     for(i=0;i<l2;i++)
         hash[string2[i]]++;
       
     for(i=0;i<l1;i++)
     {
         if(hash[string1[i]]==0)
         result=result+string1[i]; 
     }
   
     return result;
    }
};
  
  

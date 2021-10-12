Output Status:

Problem Solved Successfully 
Total Points Scored:
2/2
Total Time Taken:
0.0/1.6
Your Accuracy:
100%
Attempts No.:
1


class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
       
      int m[256] = {0};
      int n[256] = {0};

        bool flag = true;
                
       int n1 = str1.length();
       int n2 = str2.length();
       
       if(n1!=n2){
           return false;
       }
       
       for(int i=0;i<n1;i++){
           m[str1[i]]++;
       
           if(n[str2[i]]+1 == m[str1[i]]){
               n[str2[i]]++;
           }else{
               flag = false;
               break;
           }
       }
       return flag;
        
    }
};



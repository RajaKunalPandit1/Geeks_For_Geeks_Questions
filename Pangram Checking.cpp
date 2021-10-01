Output Status:

Problem Solved Successfully 
Total Points Scored:
2/2
Total Time Taken:
0.0/2.2
Your Accuracy:
100%
Attempts No.:
1

class Solution
{
 public:
   //Function to check if a string is Pangram or not.
   bool checkPangram (string &str) {
       
       bool flag = true;
       
       if(str.length()<26){
           flag  = false;
       }
       
       int arr[26] = {0};
       
       for(auto x:str){
          if(x >= 'a' && x <= 'z')
       {
           arr[x-'a']++;
       }
       else if(x >= 'A' && x <= 'Z')
       {
           arr[x-'A']++;
       }
       }
       
       for(auto x:arr){
           if(x == 0){
               flag = false;
               break;
           }
       }
       return flag;
   }
};


// Another Solution 


class Solution
{
    public:
    //Function to check if a string is Pangram or not.
    bool checkPangram (string str)
    {
        //using a hash table to mark the characters present in the string.
        vector<bool> mark(26, false);
        int index;
    
        //iterating over the string.
        for (int i=0; i<str.length(); i++)
        {
            //if we get uppercase character, we subtract 'A' from it
            //to get its index (in terms of 0 to 25).
            if ('A' <= str[i] && str[i] <= 'Z')
                index = str[i] - 'A';
    
            //if we get lowercase character, we subtract 'a' from it
            //to get its index (in terms of 0 to 25).
            else if('a' <= str[i] && str[i] <= 'z')
                index = str[i] - 'a';
    
            //marking index of current character as true in hash table.
            mark[index] = true;
        }
    
        //returning false if any letter of alphabet is unmarked.
        for (int i=0; i<=25; i++)
            if (mark[i] == false)
                return (false);
    
        //if all letters of alphabet are present then returning true.
        return (true);
    }


};

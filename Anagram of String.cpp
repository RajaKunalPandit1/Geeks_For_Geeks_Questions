Output Status: 

Problem Solved Successfully 
Total Points Scored:
1/1
Total Time Taken:
0.0/1.3
Your Accuracy:
50%
Attempts No.:
2


// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string str1, string str2)
{
        map<char,int> mp1;
        map<char,int> mp2;
        int res = 0;
        
        for(int i=0;i<str1.length();i++){
            mp1[str1[i]]++;
        }
        
        for(int i=0;i<str2.length();i++){
            mp2[str2[i]]++;
        }
        
        for(char i = 'a';i<= 'z';i++){
            res += abs(mp1[i]-mp2[i]);
        }
        
        return res;
        
}

// Another Solution 


// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string str1, string str2)
{
    // make hash array for both string and calculate
    // frequency of each character
    int count1[CHARS] = {0}, count2[CHARS] = {0};

    // count frequency of each charcter in first string
    for (int i=0; str1[i]!='\0'; i++)
        count1[str1[i]-'a']++;

    // count frequency of each charcter in second string
    for (int i=0; str2[i]!='\0'; i++)
        count2[str2[i]-'a']++;

    // traverse count arrays to find number of charcters
    // to be removed
    int result = 0;
    for (int i=0; i<26; i++)
        result += abs(count1[i] - count2[i]);
        return result;
}




Output Status: 

Problem Solved Successfully 
Total Points Scored:
0/0
Total Time Taken:
0.0/1.0
Your Accuracy:
50%
Attempts No.:
2


string transform(string s)
{
    string str = "";
    str += toupper(s[0]);
    for(int i=1;i<s.length();i++){
       
       if(str[i-1] == ' '){
           str +=  toupper(s[i]);
       }else{
           str+= s[i];
       }
       
    }
    return str;
}

// Another Solution 


string transform(string str)
{
    for (int i = 0; i < str.length(); ++i)
    {
        if(i==0 || str[i-1] == ' ')
            str[i] = toupper(str[i]);
    }
    return str;
}

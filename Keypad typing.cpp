Output Status:

Problem Solved Successfully 
Total Points Scored:
1/1
Total Time Taken:
0.2/1.4
Your Accuracy:
100%
Attempts No.:
1



//Function to find matching decimal representation of a string as on the keypad.
string printNumber(string s, int n) 
{
    
    unordered_map<char,char> m;
    
    m['a'] = '2';
   m['b'] = '2';
   m['c'] = '2';
   m['d'] = m['e'] = m['f'] = '3';
   m['g'] = m['h'] = m['i'] = '4';
   m['j'] = m['k'] = m['l'] = '5';
   m['m'] = m['n'] = m['o'] = '6';
   m['p'] = m['q'] = m['r'] = m['s'] = '7';
   m['t'] = m['u'] = m['v'] = '8';
   m['w'] = m['x'] = m['y'] = m['z'] = '9';
   
   string res;
   
   for(auto x:s){
       res.push_back(char(m[x]));
   }
   return res;
    
}

// Another Solution

//Function to find matching decimal representation of a string as on the keypad.
string printNumber(string s, int n)
{
    string temp="";
    
    //iterating over the string.
    for(int i=0;i<n;i++) 
    {
        //concatenating the number on the keypad which has the 
        //current character to the answer.
        
		if(s[i]=='a' || s[i]=='b' || s[i]=='c') 
		    temp.insert(i,"2");
		else if(s[i]=='d' || s[i]=='e' || s[i]=='f')
		    temp.insert(i,"3");
		else if(s[i]=='i' || s[i]=='g' || s[i]=='h')
		    temp.insert(i,"4");
		else if(s[i]=='j' || s[i]=='k' || s[i]=='l') 
		    temp.insert(i,"5");
		else if(s[i]=='m' || s[i]=='n' || s[i]=='o')
		    temp.insert(i,"6");
		else if(s[i]=='p' || s[i]=='q' || s[i]=='r' || s[i]=='s')
		    temp.insert(i,"7");
		else if(s[i]=='t' || s[i]=='u' || s[i]=='v') 
		    temp.insert(i,"8");
		else temp.insert(i,"9");
	}
	//returning the answer.
	return temp;
}

// Another Solution


string printNumber(string s, int n) 
{
    vector<int> mp;
    for(int i=2;i<=9;i++){
        if(i==7||i==9) mp.push_back(i);
        mp.push_back(i);
        mp.push_back(i);
        mp.push_back(i);
    }
    string ans="";
    for(auto i:s){
        ans+=('0'+mp[i-'a']);
    }
    return ans;
}

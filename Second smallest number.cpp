Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1115 /1115
Total Points Scored: 
4 /4
Your Total Score: 
2069
Total Time Taken: 
0.01
Your Accuracy: 
100%
Attempts No.: 
1

class Solution{   
  public:
    string secondSmallest(int s, int d){
        
        if(s==1 or d==1 or s>=d*9) return "-1";
        int r=d;
        string curr="";
        int dig9=s/9;
        if(s%9==0) dig9--;
        while(dig9--){
            curr+='9';
            d--;
            s-=9;
        }
        if(d<0) return "-1";
        if(d==1){
            curr+=to_string(s);
            d--;
        }
        int num=s-1;
        if(d>0){
            curr+=to_string(num);
            d--;
        }
        for(int i=1;i<d;i++){
            curr+='0';
        }
        if(d>0)
        curr+='1';
        reverse(curr.begin(),curr.end());
// Now, for second smallest num.
        if(curr.size()==2){
            int x=curr[0]-'0',y=curr[1]-'0';
            x++;
            y--;
            curr[0]=x+'0';
            curr[1]=y+'0';
            return curr;
        }
        int flag=0;
        for(int i=0;i<curr.size();i++){
            if(curr[i]=='9'){// find first 9 then decrement it and increment the previous digit.
                int x=curr[i]-'0',y=curr[i-1]-'0';
                x--;
                y++;
                curr[i]=x+'0';
                curr[i-1]=y+'0';
                flag=1;
                break;
            }
        }
// if 9 is not present:
        if(flag==0)
            for(int i=curr.size()-1;i>=0;i--){
                if(curr[i]=='1'){ // traverse from right and find first '1' and decrement it and increment previous digit.
                    int x=curr[i]-'0',y=curr[i-1]-'0';
                    x--;
                    y++;
                    curr[i]=x+'0';
                    curr[i-1]=y+'0';
                    break;
                }
// if u found first '0' then do it 1 and decrement next digit  
                if(curr[i]=='0'){
                    int x=curr[i]-'0',y=curr[i+1]-'0';
                    x=1;
                    y--;
                    curr[i]=x+'0';
                    curr[i+1]=y+'0';
                    break;
                }
            }
        return curr;
         
    }
};

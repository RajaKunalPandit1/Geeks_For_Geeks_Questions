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


class Solution{
public:	
	
	int isPanagram(string S)
	{
	    int n = S.length();
	    
	    bool flag = true;
	    
	    int arr[26] = {0};
	    
	    for(int i=0;i<n;i++){
	        if(S[i]>='a' && S[i]<='z'){
	            arr[S[i]-'a']++;
	        }else if(S[i]>='A' && S[i]<='Z'){
	            arr[S[i]-'A']++;
	        }
	    }
	    
	    for(auto x: arr){
	        if(x==0){
	            flag = false;
	            break;
	        }
	    }
	    
	    return flag;
	}

};

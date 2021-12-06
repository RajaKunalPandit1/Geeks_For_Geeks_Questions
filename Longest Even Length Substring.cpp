Output Status: 

Problem Solved Successfully 
Total Points Scored:
4/4
Total Time Taken:
0.0/3.4
Your Accuracy:
100%
Attempts No.:
1



#include<iostream>
using namespace std;
int main()
 {
	
	int t;
	cin>> t;
	
	while(t--){
	    
	    string str;
	    cin>> str;
	    
	    int n = str.length();
	    int res =0;
	    
	    for(int i=0;i<n-1;i++){
	        
	        int l = i,r= i+1,lsum =0,rsum =0;
	        
	        while(l>=0 && r<=n-1){
	            
	            lsum += str[l]-'0';
	            rsum += str[r]-'0';
	            
	            if(lsum == rsum){
	                res = max(res,r-l+1);
	            }
	            l--;
	            r++;
	        }
	    }
	       
	       cout<< res << endl;
	       
	}
	
	return 0;
}



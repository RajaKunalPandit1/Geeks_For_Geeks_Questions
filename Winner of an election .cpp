Output Status:

Problem Solved Successfully 
Total Points Scored:
2/2
Total Time Taken:
0.3/2.6
Your Accuracy:
50%
Attempts No.:
2


#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
 {
	
	int t;
	cin >> t;
	
	while(t--){
	    int n;
	    cin>> n;
	    string arr[100000];
	    
	    for(int i=0;i<n;i++){
	        cin>> arr[i];
	    }
	    
	    map<string,int> mp;
	    
	    for(int i=0;i<n;i++){
	        mp[arr[i]]++;
	    }
	    
	    string res = "";
	    int temp = 0;
	    
	    for(auto x: mp){
	        
	        int curr = x.second;
	        if(curr > temp){
	            res = x.first;
	            temp = curr;
	        }
	        
	    }
	    
	    for(auto x: res){
	        cout<< x ;
	    }
	    cout<< endl;
	    
	}
	
	return 0;
}

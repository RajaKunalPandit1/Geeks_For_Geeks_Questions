Output Status : 

Suggest Feedback

Problem Solved Successfully
Test Cases Passed: 
1150 /1150
Total Points Scored: 
2 /2
Your Total Score: 
2455
Total Time Taken: 
0.01
Your Accuracy: 
14%
Attempts No.: 
7

	vector<int>AllPrimeFactors(int n) {
	   
	   vector<int> res;
	   
	   set<int> st;
	   
	   if(n == 1){
	       return res;
	   }
	   
	   while(n%2 == 0){
	       st.insert(2);
	       n = n/2;
	   }
	   
	   while(n%3 == 0){
	       st.insert(3);
	       n = n/3;
	   }
	   
	   for(int i=5;i*i<=n;i+=6){
	       
	       while(n%i == 0){
	            st.insert(i);
	            n = n/i;
	       }
	       
	       while(n%(i+2) == 0){
	            st.insert(i+2);
	            n = n/(i+2);
	       }
	   }
	   
	   if(n > 3){
	       st.insert(n);
	   }
	   
	   for(auto x: st){
	       res.push_back(x);
	   }
	   
	   return res;
	}

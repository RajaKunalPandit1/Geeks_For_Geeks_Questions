Output Status : 

Problem Solved Successfully
Test Cases Passed: 
112 /112
Total Points Scored: 
2 /2
Your Total Score: 
1482
Total Time Taken: 
0.67
Your Accuracy: 
100%
Attempts No.: 
1

class Solution{
	public:
	vector<int> downwardDigonal(int n, vector<vector<int>> v)
	{
		
		 vector<int>ans;

 for(int i=0; i<n; i++)

 {

     int i1 = 0, j1 =i;

     while(i1<n && j1>=0)

     {

         ans.push_back(v[i1][j1]);

         i1++;

         j1--;

     }

 }

 

 for(int i=1; i<n; i++)

 {

     int i1 = i, j1 =n-1;     

     while(i1<n && j1>=0)

     {

         ans.push_back(v[i1][j1]);

         i1++;

         j1--;

     }

 }

 return ans;
	}
};
  

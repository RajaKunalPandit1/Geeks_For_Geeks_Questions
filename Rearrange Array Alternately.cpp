Output Status :

Problem Solved Successfully
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Test Cases Passed: 
191 /191
Your Total Score: 
1661
Total Time Taken: 
0.71
Correct Submission Count: 
3
Attempts No.: 
5

class Solution {
    public:
    // This function wants you to modify the given input
    // array and no need to return anything
    // arr: input array
    // n: size of array
    //Function to rearrange  the array elements alternately.
    void rearrange(long long *arr, int n) 
    { 
    	
    	vector<long long>v;
    	for(int i=0;i<n;i++){
    	    v.push_back(*(arr+i));
    	}
    	int l=0,h=n-1;
    	for(int i=0;i<n;i+=2){
    	    *(arr+i)=v[h];
    	    *(arr+i+1)=v[l];
    	    l++;h--;
    	}
    	 
    }
};

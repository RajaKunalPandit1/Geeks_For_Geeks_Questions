Output Status: 

Problem Solved Successfully 
 Test Cases Passed:
160 / 160
Total Points Scored:
4/4
Total Time Taken:
0.9/2.12
Your Accuracy:
100%
Attempts No.:
1


class Solution{

{
    public:
    //Function to return the sorted array.
    vector <int> nearlySorted(int arr[], int n, int k){
       
       priority_queue<int,vector<int>,greater<int>>pq;
       
       vector<int> res;
       
       for(int i=0;i<n;i++){
           if(i<k){
               pq.push(arr[i]);
           }else{
               pq.push(arr[i]);
               res.push_back(pq.top());
               pq.pop();
           }
       }
       
       while(!pq.empty()){
           res.push_back(pq.top());
           pq.pop();
       }
       
       return res;
    }
};


// Another Solution 

class Solution
{
    public:
    //Function to return the sorted array.
    vector <int> nearlySorted(int arr[], int num, int K)
    {
        vector <int> res;
        //implementing MinHeap using priority queue and 
        //storing first k elements in it.
        priority_queue<int, vector<int>, greater<int>> pq(arr, arr+K + 1); 
	
	    for(int i = K + 1; i<num; ++i)
	    {
	        //storing top element from priority queue in list and popping it.
	        res.push_back (pq.top ());
	        pq.pop();
	        
	        //pushing the current array element in priority queue.
	        pq.push(arr[i]);
	    }
	    
	    //using a loop till priority queue becomes empty.
	    while(!pq.empty())
	    {
	        //storing top element from priority queue in list and popping it.
	        res.push_back (pq.top ());
	        pq.pop();
	    }
	    //returning the list.
	    return res;
}
};

Output Status:

Problem Solved Successfully 
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Total Time Taken:
0.1/1.4
Correct Submission Count:
3
Attempts No.:
4
  
    void convertToWave(vector<int>& arr, int n){
        
        for(int i=1;i<n;i+=2){
            swap(arr[i],arr[i-1]);
        }
        
    }
};

// Another Solution

class Solution{
    public:
       //Function to sort the array into a wave-like array.
        void convertToWave(vector<int>& arr, int n){
        //Iterating over the array.
        for(int i=0;i<n-1;i=i+2)
                //Swapping two neighbouring elements at a time. 
                swap(arr[i],arr[i+1]); 
                
        
    }
};

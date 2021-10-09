Output Status:

Problem Solved Successfully 
Total Points Scored:
2/2
Total Time Taken:
0.9/10.6
Your Accuracy:
25%
Attempts No.:
4

class Solution
{
    public:
    //Function to count the frequency of all elements from 1 to N in the array.
    void frequencyCount(vector<int>& arr,int n, int p)
    { 
      unordered_map<int,int> m;
      
      for(int i=0;i<n;i++){
          m[arr[i]]++;
      }
      
      for(int i=0;i<n;i++){
             arr[i] = m[i+1];
      }
        
    }
};


// Another Solution 

class Solution{
    public:

    //Function to count the frequency of all elements from 1 to N in the array.
    void frequencyCount(vector<int>& arr,int N, int P)
    { 
        //Create a frequency array and store the frequency
        // of all the element
        int maxi = max(P,N);
    	vector<int> count(maxi+1,0);
        for(int i=0;i<N;i++){
            count[arr[i]]+=1;
        }
        for(int i=0;i<N;i++){
            arr[i] = count[i+1];
        }
    }

};
class Solution{
    public:

    //Function to count the frequency of all elements from 1 to N in the array.
    void frequencyCount(vector<int>& arr,int N, int P)
    { 
        //Create a frequency array and store the frequency
        // of all the element
        int maxi = max(P,N);
    	vector<int> count(maxi+1,0);
        for(int i=0;i<N;i++){
            count[arr[i]]+=1;
        }
        for(int i=0;i<N;i++){
            arr[i] = count[i+1];
        }
    }

};

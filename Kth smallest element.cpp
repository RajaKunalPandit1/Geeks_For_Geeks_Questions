Output Status :

Problem Solved Successfully
Calculating score…
Test Cases Passed: 
156 /156
Total Points Scored: 
Total Time Taken: 
0.87
Your Accuracy: 
Attempts No.: 


class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        
        priority_queue<int> pq;
        
        for(int i=0;i<=r;i++){
            pq.push(arr[i]);
        }
        
        int cnt = 0;
        
        while(cnt != (r-k+1)){
            pq.pop();
            cnt++;
        }
        return pq.top();
    }
};



class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    
    int partition(int arr[], int low, int high){
        
        int pivot = arr[high];
        int i = low - 1;
        
        for(int j=low;j<=high-1;j++){
            if(pivot >= arr[j]){
                i++;
                swap(arr[j],arr[i]);
            }
        }
        swap(arr[i+1],arr[high]);
        return i+1;
        
    }
    
    int kthSmallest(int arr[], int l, int r, int k) {
        
        while(l <= r){
            
            int p = partition(arr,l,r);
            
            if(p == k-1){
                return arr[p];
            }else if(p > k-1){
                r = p-1;
            }else{
                l = p+1;
            }
        }
        return -1;
    }

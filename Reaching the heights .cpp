Output Status : 

Problem Solved Successfully 
 Test Cases Passed:
200 / 200
Total Points Scored:
4/4
Total Time Taken:
0.33/2.2
Your Accuracy:
100%
Attempts No.:
1

// Time : O(NlogN) :: Aux_Space : O(1)

vector<int> reaching_height(int n, int a[]) {
    
    vector<int> res;
    
    if(n == 1){
        res.push_back(a[0]);
        return res;
    }
    
    sort(a,a+n);
    
    if(a[0] == a[n-1]){
        res.push_back(-1);
        return res;
    }
    
    int low=0,high = n-1;
    int flag = 1;
    
    while(low<=high){
        
        if(flag == 1){
            res.push_back(a[high]);
            high--;
            flag *= -1;
        }else{
            res.push_back(a[low]);
            low++;
            flag *= -1;
        }
    }
    return res;
}

// Another Solution 

vector<int> reaching_height(int n, int a[]) {
    vector<int> v;
    if (n == 1) {
        v.push_back(a[0]);
        return v;
    }
    
    std::sort(a, a+n);
    if (a[0] == a[n-1]) {
        v.push_back(-1);
        return v;
    }
    int hi = n-1;
    int lo = 0;
    bool is_hi = true;
    while (lo <= hi) {
        if (is_hi) {
            v.push_back(a[hi]);
            hi--;
        } else {
            v.push_back(a[lo]);
            lo++;
        }
        is_hi ^= 1;
    }
    return v;
}

Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1115 /1115
Total Points Scored: 
4 /4
Your Total Score: 
2117
Total Time Taken: 
0.17
Your Accuracy: 
100%
Attempts No.: 
1

/*
Instructions - 

    1. 'shop' is object of class Shop.
    2. User 'shop.get(int i)' to enquire about the price
            of the i^th chocolate.
    3. Every chocolate in shop is arranged in increasing order
            i.e. shop.get(i) <= shop.get(i + 1) for all 0 <= i < n - 1
*/
class Solution{
    public:
    
    Shop shop;
    Solution(Shop s)
    {
        this->shop = s;
    }
    long long find(int n, long k){
        // Return the number of chocolates Geek had
        // enjoyed out of 'n' chocolates availabe in the
        // 'shop'.
        long long ans=0;
        int l=0;
        int h=n-1;
        while(k>0){
             int ind;
             int cost=-1;
             while(l<=h){
                 int mid=l+(h-l)/2;
                 int num=shop.get(mid);
                 if(num<=k){
                     ind=mid;
                     cost=num;
                     l=mid+1;
                 }
                 else{
                     h=mid-1;
                 }
             }
              
             if(cost==-1){
                 break;
             }
             while(cost<=k){
                 k-=cost;
                  ans++;
             }
             l=0;
             h=ind;
        }
        return ans;
    }
};

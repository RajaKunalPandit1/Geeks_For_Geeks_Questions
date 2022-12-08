Output Status : 

Problem Solved Successfully
Test Cases Passed: 
91 /91
Total Points Scored: 
4 /4
Your Total Score: 
1691
Total Time Taken: 
0.02
Your Accuracy: 
100%
Attempts No.: 
1

class Solution {
public:
    bool is_prime(long long n){ // checking if number is prime

        if(n==2)

            return true;

        for(long long i=2;i<=sqrt(n);i++){

            if(n%i==0)

                return false;

        }

        return true;
    }

    vector<int> threeDivisors(vector<long long> query, int q){

        vector<int>v(q,0);

        for(int i=0;i<q;i++){

            long long x = query[i];

            for(int j=2;j<=sqrt(x);j++){

                if(is_prime(j)){

                    v[i]++;

                }
            }
        }
        return v;
    }
};

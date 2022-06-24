Output Status : 

Problem Solved Successfully 
 Test Cases Passed:
10004 / 10004
Total Points Scored:
2/2
Total Time Taken:
0.03/1.02
Your Accuracy:
100%
Attempts No.:
1


class Solution{
public:
    char profession(int level, int pos){
        
        if(pos == 1){
            return 'e';
        }else{
            char parent = profession(level-1,(pos+1)/2);
            char curr = parent;
            if(pos%2 == 0){
                curr ^= 'e' ^ 'd';
            }
        return curr;
        }
    }
};

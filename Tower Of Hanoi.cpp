Output Status : 

Problem Solved Successfully
Test Cases Passed: 
21 /21
Total Points Scored: 
4 /4
Your Total Score: 
2693
Total Time Taken: 
0.2
Your Accuracy: 
100%
Attempts No.: 
1

    long long toh(int n, int from, int to, int aux) {
        
        if(n == 1){
            cout<< "move disk 1 from rod " << from << " to rod " << to << endl;
            return 1;
        }else{
            
            long long steps = 0;
            steps += toh(n-1,from,aux,to);
            cout << "move disk " << n << " from rod " << from << " to rod " << to << endl; 
            steps += toh(n-1,aux,to,from);
            return steps+1;
        }
    }

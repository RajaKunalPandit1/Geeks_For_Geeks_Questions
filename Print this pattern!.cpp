Output Status:

Problem Solved Successfully 
Total Points Scored:
2/2
Total Time Taken:
0.0/1.1
Your Accuracy:
100%
Attempts No.:
1
  
  
class Solution{
public:
    void printPattern(int N)
    {
        
        int i,j,size = 2*N-1;
        int s=0;
        int e = size-1;
        int a[size][size];
        while(N){
            for(i=s;i<=e;i++){
                for(j=s;j<=e;j++){
                    if(i==s || j==s || i==e || j==e){
                        a[i][j] = N;
                    }
                }
            }
            s++;
            e--;
            N--;
        }
        
        for(i=0;i<size;i++){
            for(j=0;j<size;j++){
                cout<< a[i][j];
            }
            cout<< endl;
        }
        
        
    }
};

// Another Solution 

class Solution
{
public:
    void printPattern(int N)
    {
        for(int i = 0 ; i < 2 * N - 1 ; i++)
        {
            for(int j = 0 ; j < 2 * N - 1 ; j++)
            {
               cout << (1 + max(abs(N - i - 1), abs(N - j - 1)));
            }
            
            cout << endl;
        }
    }
}

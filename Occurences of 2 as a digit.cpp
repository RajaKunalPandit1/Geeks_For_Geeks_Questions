Output Status:

Problem Solved Successfully 
Total Points Scored:
4/4
Total Time Taken:
0.0/1.5
Your Accuracy:
50%
Attempts No.:
2


/* Counts the number of 2s in a number at d-th
   digit */
long long int count2sinRangeAtDigit(long long int number, long long int d)
{

    return 0;
    
}

/* Counts the number of '2' digits between 0 and n */
long long int numberOf2sinRange(long long int number)
{
    
    int count =0;
    long long i,j;
    
    if(number<9){
    count = 1;
    
    }else if(number>11){
        
        for(int i=0;i<=number;i++){
            int j=i;
            while(j!=0){
                int num = j%10;
                if(num == 2){
                    count++;
                }
                j= j/10;
            }
        }
        
    }
    return count;

}



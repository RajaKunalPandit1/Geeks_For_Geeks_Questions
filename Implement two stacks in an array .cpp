Output Status : 

Problem Solved Successfully
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Test Cases Passed: 
1120 /1120
Your Total Score: 
2683
Total Time Taken: 
0.06
Correct Submission Count: 
3
Attempts No.: 
6

  class twoStacks
{
    int *arr;
    int size;
    int top1, top2;
    public:
    
    twoStacks(int n=100)
    {
        size = n; 
        arr = new int[n]; 
        top1 = -1; 
        top2 = size;
    }
 
    //Function to push an integer into the stack1.
    void push1(int x)
    {
        if(top1 < top2-1){
            top1++;
            arr[top1] = x;
        }
    }
    
    //Function to push an integer into the stack2.
    void push2(int x)
    {
       if(top2-1 > top1){
           top2--;
           arr[top2] = x;
       }
    }
    
    //Function to remove an element from top of the stack1.
    int pop1()
    {
        if(top1 == -1) return -1;
        
        int res = arr[top1];
        top1--;
        return res;
    }
    
    //Function to remove an element from top of the stack2.
    int pop2()
    {
       if(top2 == size) return -1;
       
       int res = arr[top2];
       top2++;
       return res;
    }
};

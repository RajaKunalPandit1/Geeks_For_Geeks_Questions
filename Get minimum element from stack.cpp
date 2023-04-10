Output Status : 

Problem Solved Successfully
No marks, because you solved this problem after visiting Full solution on 2023-04-10.
Test Cases Passed: 
100 /100
Total Points Scored: 
0 /4
Your Total Score: 
2159
Total Time Taken: 
0.01
Your Accuracy: 
33%
Attempts No.: 
3


/*
The structure of the class is as follows
class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};
*/

class Solution{
    int minEle;
    stack<int> ms;
    stack<int> as;
    public:
    
       /*returns min element from stack*/
       int getMin(){
           
           if(as.empty()){
               return -1;
           }else{
               int res =  as.top();
               return res;
           }
       }
       
       /*returns poped element from stack*/
       int pop(){

           if(ms.empty()){
               return -1;
           }
           
           int res = ms.top();
           if(ms.top() == as.top()){
               as.pop();
           }
           ms.pop();
           return res;
       }
       
       /*push element x into the stack*/
       void push(int x){
           
           if(ms.empty()){
               ms.push(x);
               as.push(x);
           }else{
               ms.push(x);
               if(as.top() >= ms.top()){
                   as.push(x);
               }
           }
       }
 };

Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1101 /1101
Total Points Scored: 
4 /4
Your Total Score: 
1572
Total Time Taken: 
0.11
Your Accuracy: 
100%
Attempts No.: 
1

class Solution {
  public:
    void bfs(long long i,long long &ans,long long que)

  {

      queue<long long>q;

      q.push(i);

      while(!q.empty()){

      long long num=q.front();

      q.pop();

      

      if(num<=que){

          ans=max(ans,num);

          int last_digit=num%10;

          

          if(last_digit==0){

              q.push((num*10)+1);

          }

          else if(last_digit==9)

          {

              q.push((num*10)+8);

          }

          else

          {

              q.push((num*10)+(last_digit-1));

              q.push((num*10)+(last_digit+1));

          }

      }

      }

  }

    long long jumpingNums(long long que) {

        // code here

        long long ans=0;

        if(que<=10){

            return que;

        }

        else

        {

            for(long long i=1;i<=9;i++)

            {

                bfs(i,ans,que);

            }

        }

        

        return ans;

    }
};

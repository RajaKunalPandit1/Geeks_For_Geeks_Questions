Output Status : 

Problem Solved Successfully
Test Cases Passed: 
498 /498
Total Points Scored: 
4 /4
Your Total Score: 
2687
Total Time Taken: 
0.37
Your Accuracy: 
50%
Attempts No.: 
2

// Naive Sol :: 

  /*
The structure of petrolPump is 
struct petrolPump
{
    int petrol;
    int distance;
};*/

/*You are required to complete this method*/
class Solution{
  public:
  
    //Function to find starting point where the truck can start to get through
    //the complete circle without exhausting its petrol in between.
    int tour(petrolPump p[],int n)
    {
       
       for(int i=0;i<n;i++){
           
            int curr_petrol = 0;
            
            int end = i;
            
            while(true){
                
                curr_petrol += (p[i].petrol - p[i].distance);
                
                if(curr_petrol < 0){
                    break;
                }
                
                end = (end + 1)%n;
                
                if(end == i){
                    return (i);
                }
            }
       }
       return -1;
    }
};


// Efficient Sol :: 
  
class Solution{
  public:
  
    //Function to find starting point where the truck can start to get through
    //the complete circle without exhausting its petrol in between.
    int tour(petrolPump p[],int n)
    {
       
       int start = 0,curr_petrol = 0;
       
       int prev_petrol = 0;
       
       for(int i=0;i<n;i++){
           
           curr_petrol += (p[i].petrol - p[i].distance);
           
           if(curr_petrol < 0){
               
               start = i+1;
               prev_petrol += curr_petrol;
               curr_petrol = 0;
           }
       }
       
       return (curr_petrol + prev_petrol >= 0) ? start : -1;
       
    }
};

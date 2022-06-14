Output Status: 

Problem Solved Successfully 
 Test Cases Passed:
130 / 130
Total Points Scored:
4/4
Total Time Taken:
0.01/1.56
Your Accuracy:
100%
Attempts No.:
1

class Solution {
  
public:
    
    double neutralPoint(double low,double high, double magnets[], int n){

        while(low<high){
            
            double mid = (low+high)/2;
            double totalForce = 0;
            
            for(int i=0;i<n;i++){
                
                totalForce += 1/(mid-magnets[i]);
            
            }
            
            if(abs(totalForce)<0.000001){
                return mid;
            }else if(totalForce < 0){
                high = mid;
            }else{
                low = mid;
            }  
        }
        return low;
    }
    
        void nullPoints(int n, double magnets[], double getAnswer[])
    {
        
        for(int i=0;i<n-1;i++){
            getAnswer[i] = neutralPoint(magnets[i],magnets[i+1],magnets,n);
        }
        
    }
};

// Another Solution

class Solution{
    public:
        double searchBinary(double low, double high, double* LeftForce, int lefts, double* RightForce, int rights)
    {
    	double epsilon = 0.0000000000001;
    
    	double mid = (low + high)/2;
    	
    	double netForce = 0;
    
    	for(int i = 0; i < lefts; i++)
    		netForce += 1.0/(mid - LeftForce[i]);
    	for(int i = 0; i < rights; i++)
    		netForce -= 1.0/(RightForce[i] - mid);
    
    	if((-epsilon) < netForce && netForce < epsilon)
    		return mid;
    	else if (netForce > 0)
    		return searchBinary(mid, high, LeftForce, lefts, RightForce, rights);
    	else 
    		return searchBinary(low, mid, LeftForce, lefts, RightForce, rights);
    }
    
    void nullPoints(int n, double magnets[], double getAnswer[])
    {
    	for(int i=0; i<n-1; i++){
    		getAnswer[i] = searchBinary(magnets[i], magnets[i+1], magnets, i+1, magnets+i+1, n-1-i);
    	}
    }
};

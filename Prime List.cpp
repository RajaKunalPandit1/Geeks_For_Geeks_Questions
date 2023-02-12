Output Status : 

Problem Solved Successfully
Test Cases Passed: 
265 /265
Total Points Scored: 
4 /4
Your Total Score: 
1929
Total Time Taken: 
0.2
Your Accuracy: 
100%
Attempts No.: 
1


/*

class Node{
public:
    int val;
    Node *next;
    Node(int num){
        val=num;
        next=NULL;
    }
};

*/

class Solution{
public:
     bool isPrime(int n){
        if(n==1 or n<=0) return false;
        for(int i=2; i<=sqrt(n); i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }

    Node *primeList(Node *head){
        Node* root=head;
        while(head!=NULL){
            int temp = head->val;
            
            if(isPrime(temp)){
                head = head->next;
                continue;
            }
            else{
                int temp2 = temp;
                while(!isPrime(temp) and !isPrime(temp2)){
                    temp++;
                    temp2--;
                }
                
                if(isPrime(temp) and isPrime(temp2)){
                    head->val = min(temp,temp2);
                }
                else if(isPrime(temp2)){
                    head->val = temp2;
                }
                else{
                    head->val = temp;
                }
                
                head = head->next;
            }
        }
        return root;
    }
};

Output Status : 

Problem Solved Successfully 
 Test Cases Passed:
100 / 100
Total Points Scored:
4/4
Total Time Taken:
0.01/1.55
Your Accuracy:
50%
Attempts No.:
2

/*
struct Node
{
    int coeff;
    int pow;
    struct Node* next;
    
    Node(int c, int p){
        coeff = c;
        pow = p;
        next = NULL;
    }
    
};
*/

class Solution{
  public:
    /* The below method print the required sum of polynomial
    p1 and p2 as specified in output  */
 Node* addPolynomial(Node *p1, Node *p2)
    {
        //Your code here
        Node*res = new Node(0,0);
        Node*ans = res;
        while(p1 or p2){
            
            if(!p1){ ans->next = p2; p2 = p2->next;}
            else if(!p2) {ans->next = p1; p1 = p1->next;}
            
            else if(p1->pow == p2->pow){
                Node*n = new Node(p1->coeff+p2->coeff,p1->pow);
                ans->next = n;
                p1 = p1->next;
                p2 = p2->next;
            }
            else if(p1->pow>p2->pow){ ans->next = p1; p1 = p1->next;}
            
            else{ ans->next = p2; p2 = p2->next;}
            
            ans = ans->next;
        }
        return res->next;
    }
};

Output Status : 

Problem Solved Successfully
Test Cases Passed: 
340 /340
Total Points Scored: 
2 /2
Your Total Score: 
2477
Total Time Taken: 
0.03
Your Accuracy: 
100%
Attempts No.: 
1

/*
  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        vector<int> res;
        
        Node *curr = head;
        
        while(curr != NULL){
            res.push_back(curr->data);
            curr = curr->next;
        }
        
        curr = head;
        sort(res.begin(),res.end());
        
        int idx = 0;
        
        while(curr != NULL){
            
            curr->data = res[idx++];
            curr = curr->next;
        }
        return head;
    }
};

// Another Solution :: 

class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        Node *Zs = NULL,*Ze = NULL;
        Node *Fs = NULL,*Fe = NULL;
        Node *Ss = NULL,*Se = NULL;
        
        Node *curr = head;
        
        while(curr != NULL){
            
            if(curr->data == 0){
                
                if(Zs == NULL){
                    Zs = curr;
                    Ze = Zs;
                }else{
                    Ze->next = curr;
                    Ze = Ze->next;
                }
            }else if(curr->data == 1){
                
                if(Fs == NULL){
                    Fs = curr;
                    Fe = Fs;
                }else{
                    Fe->next = curr;
                    Fe = Fe->next;
                }
            }else{
                
                if(Ss == NULL){
                    Ss = curr;
                    Se = Ss;
                }else{
                    Se->next = curr;
                    Se = Se->next;
                }
            }
            curr = curr->next;
        }
        
        if(Zs != NULL){
            head = Zs;
            if(Fs != NULL){
                Ze->next = Fs;
                if(Ss != NULL){
                    Fe->next = Ss;
                    Se->next = NULL;
                }else{
                    Fe->next = NULL;
                }
            }else if(Ss != NULL){
                Ze->next = Ss;
                Se->next = NULL;
            }
        }else if(Fs != NULL){
            
            head = Fs;
            if(Ss != NULL){
                Fe->next = Ss;
                Se->next = NULL;
            }
        }
        
        return head;
    }
};

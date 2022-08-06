Output Status : 

Problem Solved Successfully
Test Cases Passed: 
151 /151
Total Points Scored: 
8 /8
Your Total Score: 
1273
Total Time Taken: 
0.01
Your Accuracy: 
100%
Attempts No.: 
1

/*
struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
    
    Node(int x){
        data = x;
        next = NULL;
        prev = NULL;
    }
};
*/
class Solution{
public:
    Node* partition(Node *l, Node *h){
        
        if(!l || !h) return NULL;
        
        Node *pivot = h;
        Node *ptr = l;
        
        for(Node *curr = l;curr!=h;curr = curr->next){
            
            if(curr->data <= pivot->data){
                swap(curr->data,ptr->data);
                ptr = ptr->next;
            }
        }
        swap(ptr->data,pivot->data);
        return ptr;
    
    }
 };

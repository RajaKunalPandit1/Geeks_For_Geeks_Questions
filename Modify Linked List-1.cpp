Output Status : 

Problem Solved Successfully
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Test Cases Passed: 
222 /222
Your Total Score: 
2363
Total Time Taken: 
0.08
Correct Submission Count: 
4
Attempts No.: 
6

/*
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};
*/
class Solution{
    public:
    struct Node* modifyTheList(struct Node *head)
    {
        vector<int> res;
        
        Node *curr = head;
        
        while(curr != NULL){
            res.push_back(curr->data);
            curr = curr->next;
        }
        
        int n = res.size();
        int i=0,j=n-1;
        curr = head;
        
        while(i<j){
            
            curr->data = res[j]-res[i];
            i++;
            j--;
            curr = curr->next;
        }
        
        while(curr != NULL){
            curr->data = res[j];
            curr = curr->next;
            j--;
        }
        return head;
    }
};

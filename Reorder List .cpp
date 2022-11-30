Output Status : 

Problem Solved Successfully
Test Cases Passed: 
314 /314
Total Points Scored: 
8 /8
Your Total Score: 
1661
Total Time Taken: 
0.37
Your Accuracy: 
100%
Attempts No.: 
1

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
    void reorderList(Node* head) {
        
        deque<int> q;
        Node *temp = head;
        
        while(temp){
            q.push_back(temp->data);
            temp = temp->next;
        }
        
        temp = head;
        int i = 1;
        while(temp){
            
            if(i%2 == 0){
                temp->data = q.back();
                q.pop_back();
            }else{
                temp->data = q.front();
                q.pop_front();
            }
            i++;
            temp = temp->next;
        }
    }
};

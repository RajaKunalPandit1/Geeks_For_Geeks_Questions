Output Status : 

Problem Solved Successfully
Test Cases Passed: 
129 /129
Total Points Scored: 
4 /4
Your Total Score: 
1907
Total Time Taken: 
0.54
Your Accuracy: 
100%
Attempts No.: 
1

/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

class Solution
{
public:
    int intersectPoint(Node* head1, Node* head2)
    {
        
        Node *temp;
        temp = head1;
        while(temp != NULL){
            if(temp->data < 0){
                temp->data = (temp->data-1001);
            }else{
                temp->data = (temp->data+1001);
            }
            temp = temp->next;
        }
        
        Node *temp2;
        temp2 = head2;
        while(temp2 != NULL){
            if(temp2->data > 1000){
                return (temp2->data-1001);
            }
            if(temp2->data < -1001){
                return (temp2->data+1001);
            }
            temp2 = temp2->next;
        }
        return -1;
    }
};

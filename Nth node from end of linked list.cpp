Output Status :

Problem Solved Successfully
Test Cases Passed: 
1113 /1113
Total Points Scored: 
2 /2
Your Total Score: 
2365
Total Time Taken: 
0.59
Your Accuracy: 
100%
Attempts No.: 
1

/*
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

//Function to find the data of nth node from the end of a linked list.
class Solution{
public:
    int getNthFromLast(Node *head, int n)
    {
           
           int res = 0;
           
           Node *temp = head;
           
           while(temp){
               res++;
               temp = temp->next;
           }
           
           temp = head;
           
           if(res < n){
               return -1;
           }
           
           for(int i=1;i<=res-n;i++){
               temp = temp->next;
           }
           
           return temp->data;
    }
};

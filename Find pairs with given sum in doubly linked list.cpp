Output Status : 

Problem Solved Successfully
Test Cases Passed: 
11110 /11110
Total Points Scored: 
2 /2
Your Total Score: 
1330
Total Time Taken: 
0.22
Your Accuracy: 
100%
Attempts No.: 
1


/* Doubly linked list node class
class Node
{
public:
    int data;
    Node *next, *prev;
    Node(int val) : data(val), next(NULL), prev(NULL)
    {
    }
};
*/

class Solution
{
public:
    vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target)
    {
        
        Node *left = head;
        Node *right = head;
        
        while(right->next != NULL){
            right = right->next;
        }
        
        vector<pair<int,int>> res;
        
        while(left != right){
            
            int currSum = left->data + right->data;
            
            if(currSum == target){
                res.push_back({left->data,right->data});
                left = left->next;
            }else if(currSum < target){
                left = left->next;
            }else{
                right = right->prev;
            }
        }
        return res;
      }
};

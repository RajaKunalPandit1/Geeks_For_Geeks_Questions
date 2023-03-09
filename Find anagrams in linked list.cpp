Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1115 /1115
Total Points Scored: 
4 /4
Your Total Score: 
2039
Total Time Taken: 
0.04
Your Accuracy: 
100%
Attempts No.: 
1

/*
Definition for singly Link List Node
struct Node
{
    char data;
    Node* next;
    Node(int x) {  data = x;  next = NULL; }
};

You can also use the following for printing the link list.
printList(Node* node);
*/

class Solution {
  public:
    vector<Node*> findAnagrams(struct Node* head, string s) {
        vector<Node*> res;
        vector<int> window(26), slidingWindow(26);
        
        for(auto &x: s)window[x-'a']++;
        Node *start = head, *end = head;
        int count = 0;
        
        while(end != NULL) {
            slidingWindow[end->data - 'a']++;
            count++;
            
            if(slidingWindow == window) {
                res.push_back(start);
                start = end->next;
                end->next = NULL;
                end = start;
                count = 0;
                
                for(int i = 0; i < 26; i++)slidingWindow[i] = 0;
            }
            else {
                end = end->next;
                
                if(count >= s.size()) {
                    slidingWindow[start->data - 'a']--;
                    start = start->next;
                }
            }
        }
        
        return res;
    }
};

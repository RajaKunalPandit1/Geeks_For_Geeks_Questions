Output Status : 

Problem Solved Successfully
Test Cases Passed: 
151 /151
Total Points Scored: 
4 /4
Your Total Score: 
2463
Total Time Taken: 
1.27
Your Accuracy: 
20%
Attempts No.: 
5

    void removeLoop(Node* head)
    {
        
        Node *curr = head;
        
        unordered_map<Node *, int> mp;
        
        while(curr->next != NULL){
            
            if(mp.find(curr->next) != mp.end()){
                curr->next = NULL;
                return;
            }
            mp[curr] = curr->data;
            curr = curr->next;
        }
        return;
    }

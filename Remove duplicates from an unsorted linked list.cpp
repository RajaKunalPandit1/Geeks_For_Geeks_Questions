Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1120 /1120
Total Points Scored: 
2 /2
Your Total Score: 
2710
Total Time Taken: 
0.43
Your Accuracy: 
100%
Attempts No.: 
1

   Node * removeDuplicates(Node *head) 
    {
        Node *dummy = new Node(0);
        Node *temp = dummy;
        Node *curr = head;
        
        unordered_set<int> st;
        
        while(curr != NULL){
            
            if(st.find(curr->data) == st.end()){
                
                Node *var = new Node(curr->data);
                temp->next = var;
                temp = temp->next;
                
                st.insert(curr->data);
            }
            curr = curr->next;
        }
        return dummy->next; 
    }

// Another Sol :: 

    Node * removeDuplicates(Node *head) 
    {
        
        if(head == NULL || head->next == NULL) return head;
        
        Node *prev = head;
        Node *curr = head->next;
        
        unordered_set<int> st;
        st.insert(head->data);
        
        while(curr != NULL){
            
            if(st.find(curr->data) != st.end()){
                
                prev->next = curr->next;
                curr = prev->next;
                
            }else{
                
                st.insert(curr->data);
                curr = curr->next;
                prev = prev->next;        
            }   
        }
        return head;
    }

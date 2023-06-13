Output Status : 

Problem Solved Successfully
Test Cases Passed: 
700 /700
Total Points Scored: 
2 /2
Your Total Score: 
2469
Total Time Taken: 
0.52
Your Accuracy: 
50%
Attempts No.: 
2

    Node* findIntersection(Node* head1, Node* head2){
        
        unordered_set<int> st;
        
        Node *curr = head2;
        
        while(curr != NULL){
            st.insert(curr->data);
            curr = curr->next;
        }
        
        curr = head1;
        
        Node *temp = new Node(0);
        Node *head = temp;
        
        while(curr != NULL){
            
            if(st.find(curr->data) != st.end()){
                temp->next = curr;
                temp = temp->next;
            }
            curr = curr->next;
        }
        
        temp->next = NULL;
        return head->next;
}

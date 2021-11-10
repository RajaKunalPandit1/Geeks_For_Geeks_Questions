Output Status:

Problem Solved Successfully 
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Total Time Taken:
0.0/1.1
Correct Submission Count:
2
Attempts No.:
2


void deleteAlt(struct Node *head){
    
    int i=0;
    Node *curr = head;
    while(curr->next != NULL){
      
        Node *temp = curr->next;
        curr->next = curr->next->next;
        delete(temp);
        if(curr->next != NULL){
            curr = curr->next;
        }
    }
}

// Another Solution 

void deleteAlt(Node *head){
   if(head==NULL) return;
   Node* temp=head;
   Node* temp2=head->next;
   while(temp and temp2)
   {
       temp->next=temp2->next;
       delete temp2;
       temp=temp->next;
       if(temp)
       temp2=temp->next;
   }
}

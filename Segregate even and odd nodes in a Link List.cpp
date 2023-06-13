Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1212 /1212
Total Points Scored: 
4 /4
Your Total Score: 
2467
Total Time Taken: 
0.2
Your Accuracy: 
50%
Attempts No.: 
2

    Node* divide(int n, Node *head){
        
        Node *Es=NULL,*Ee=NULL,*Os=NULL,*Oe=NULL;
        
        Node *curr = head;
        
        while(curr != NULL){
            
            if(curr->data % 2 == 0){
                
                if(Es == NULL){
                    Es = curr;
                    Ee = Es;
                }else{
                    Ee->next = curr;
                    Ee = Ee->next;
                }
            }else{
                
                if(Os == NULL){
                    Os = curr;
                    Oe = Os;
                }else{
                    Oe->next = curr;
                    Oe = Oe->next;
                }
            }
            curr = curr->next;
        }
        
        if(Os == NULL || Es == NULL){
            return head;
        }
        
        Ee->next = Os;
        Oe->next = NULL;
        return Es;
        
    }

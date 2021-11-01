Output Status:

Problem Solved Successfully 
Total Points Scored:
4/4
Total Time Taken:
0.4/1.6
Your Accuracy:
100%
Attempts No.:
1

/* Link list Node
struct Node {
  int data;
  struct Node *next;
  
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
//Function to merge two sorted linked list.
Node* sortedMerge(Node* head1, Node* head2)  
{  
    
    Node *res;
    
    if(head1 == NULL){
        return head2;
    }
    
    if(head2 == NULL){
        return head1;
    }
    
    if(head1->data > head2->data){
        res = head2;
        res->next = sortedMerge(head1,head2->next);
    }else{
        res = head1;
        res->next = sortedMerge(head1->next,head2);
    }
    return res;
}  


// Another Solution 

Node* sortedMerge(Node* head1, Node* head2)  
{  
    //creating a dummy first node to hang the result on.
    struct Node *dummy = new Node(0); 
  
    //a pointer, tail is used to store the resultant list after merging.
    struct Node *tail = dummy;  

    while (1) {  
        //if either list runs out, we store all the nodes 
        //of other list in link part of tail node.
        if (head1 == NULL) {  
            tail->next = head2;  
            break;  
        }  
        else if (head2 == NULL) {  
            tail->next = head1;  
            break;  
        }
        //comparing the data of the two lists and storing the node with smaller
        //data in link part of the tail node.
        if (head1->data <= head2->data){
            tail->next = head1;
            //if data in first list is smaller, we move to the next node in it.
            head1 = head1->next;
        }
        else{
            tail->next = head2;
            //if data in second list is smaller, we move to the next node in it.
            head2 = head2->next;
        }
        //moving to the next node.
        tail = tail->next;  
    }
    //returning the merged list attached to dummy.
    return dummy->next;  
}  

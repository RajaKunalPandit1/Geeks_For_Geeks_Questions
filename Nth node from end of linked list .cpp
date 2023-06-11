Output Status : 

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
           
           int size = 0;
           Node *curr = head;
           
           while(curr != NULL){
               size++;
               curr =curr->next;
           }
           
           if(size < n){
               return -1;
           }
           
           curr = head;
           
           for(int i=0;i<size-n;i++){
               curr = curr->next;
           }
           
           return curr->data;
    }
};

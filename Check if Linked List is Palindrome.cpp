Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1076 /1076
Total Points Scored: 
4 /4
Your Total Score: 
2481
Total Time Taken: 
0.05
Your Accuracy: 
100%
Attempts No.: 
1

/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution{
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        
        stack<Node *> st;
        
        Node *curr = head;
        
        while(curr != NULL){
            
            st.push(curr);
            curr = curr->next;
            
        }
        
        curr = head;
        
        while(curr != NULL){
            
            if(curr->data != st.top()->data){
                return false;
            }
            st.pop();
            curr = curr->next;
        }
        return true;
    }
};

// Another Solution :: 

class Solution{
  public:
    
    Node *rev(Node *head){
        
        if(head == NULL || head->next == NULL){
            return head;
        }
        
        Node *prev = NULL;
        
        Node*curr = head;
        
        while(curr != NULL){
            
            Node *next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    
    bool isPalindrome(Node *head)
    {
        
        if(head == NULL || head->next == NULL){
            return true;
        }
        
        Node *fast = head,*slow = head;
        
        while(fast->next != NULL && fast->next->next != NULL){
            
            slow = slow->next;
            fast = fast->next->next;
        }
        
        Node *reverse = rev(slow->next); 
        
        fast = head;
        
        while(reverse != NULL){
            
            if(fast->data != reverse->data){
                return false;
            }
                fast = fast->next;
                reverse = reverse->next;
        }
        return true;
    }
};

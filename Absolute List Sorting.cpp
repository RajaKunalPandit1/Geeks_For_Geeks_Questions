Output Status:

Problem Solved Successfully
Test Cases Passed: 
140 /140
Total Points Scored: 
2 /2
Your Total Score: 
1743
Total Time Taken: 
0.49
Your Accuracy: 
100%
Attempts No.: 
1

/*
struct Node
{
    Node* next;
    int data;
}; */

/*Your method shouldn't print anything
 it should transform the passed linked list */
class Solution{
    
public:
    Node* sortList(Node* head)
    {
         struct Node*nh=head,*tail=head,*tmp;
        
        head=head->next;
        nh->next=NULL;
        while(head)
        {
            if(head->data>0)
            {
                tail->next=head;
                tail=tail->next;
                head=head->next;
                tail->next=NULL;
            }else {
                tmp=head;
                head=head->next;
                tmp->next=nh;
                nh=tmp;
            }
        }
        return nh;
    }
};

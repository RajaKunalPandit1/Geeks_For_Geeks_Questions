Output Status:

Problem Solved Successfully 
Total Points Scored:
1/1
Total Time Taken:
0.0/2.2
Your Accuracy:
100%
Attempts No.:
1
  
  //Function to push an integer into the stack.
void MyStack ::push(int x) 
{
    StackNode *temp = new StackNode(x);
    temp->next = top;
    top = temp;
}

//Function to remove an item from top of the stack.
int MyStack ::pop() 
{
    if(top == NULL){
        return -1;
    }else{
        int res = top->data;
        StackNode *temp = top;
        top = top->next;
        delete(temp);
        return res;
    }
}

// Another Solution 

//Function to push an integer into the stack.
void MyStack ::push(int x) 
{
    if (top == NULL) 
    {
        top = new StackNode(x);
    } 
    else 
    {
        //creating a new temp node in the stack
        StackNode *temp = new StackNode(x);
        //assigning link part of new node to top and making it top node.
        temp->next = top;
        top = temp;
    }
}

//Function to remove an item from top of the stack.
int MyStack ::pop() 
{
    StackNode *temp = top;

    //if node at temp pointer is null, the stack is empty so we return -1.
    if (temp == NULL) 
    {
        return -1;
    } 
    else 
    {
        //storing the data at top node and deleting that node.
        temp = temp->next;
        int r = top->data;
        delete (top);
        top = temp;
        
        //returning the data.
        return r;
    }
}

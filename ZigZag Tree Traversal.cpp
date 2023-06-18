Output Status : 

Problem Solved Successfully
Test Cases Passed: 
520 /520
Total Points Scored: 
2 /2
Your Total Score: 
2513
Total Time Taken: 
0.12
Your Accuracy: 
33%
Attempts No.: 
3

    vector <int> zigZagTraversal(Node* root)
    {
    	vector<int> res;
    	
    	if(root == NULL) return res;
    	
    	stack<Node*> st1;
    	stack<Node*> st2;
    	
    	st1.push(root);
    	
    	while(!st1.empty() || !st2.empty()){
    	    
    	   while(!st1.empty()){
    	       
    	       Node *curr = st1.top();
    	       st1.pop();
    	       
    	       res.push_back(curr->data);
    	       
    	       if(curr->left != NULL) st2.push(curr->left);
    	       if(curr->right != NULL) st2.push(curr->right);
    	   }
    	   
    	   while(!st2.empty()){
    	       
    	       Node *curr = st2.top();
    	       st2.pop();
    	       
    	       res.push_back(curr->data);
    	       
    	       if(curr->right != NULL) st1.push(curr->right);
    	       if(curr->left != NULL) st1.push(curr->left);
    	   }
    	}
    	return res;
    }

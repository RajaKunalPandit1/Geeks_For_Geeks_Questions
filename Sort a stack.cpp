Output Status:

Problem Solved Successfully 
Total Points Scored:
2/2
Total Time Taken:
0.0/1.4
Your Accuracy:
100%
Attempts No.:
1



void sortedInsert(stack<int>&s,int ele){
    
    if(s.empty() || ele > s.top()){
        s.push(ele);
    }else{
        int temp = s.top();
        s.pop();
        sortedInsert(s,ele);
        s.push(temp);
        return;
    }
    
}

void SortedStack :: sort()
{

    if(!s.empty()){
        int temp = s.top();
        s.pop();
        sort();
        sortedInsert(s,temp);
        return;
    }
    
}

// Another Solution 


void sortedInsert(stack<int> &s, int x)
{
	if(s.empty() or x>s.top())
	{
		s.push(x);
		return;
	}
	int temp = s.top();
	s.pop();
	sortedInsert(s,x);
	s.push(temp);
}

void SortedStack :: sort()
{
	if(!s.empty())
	{
		int x = s.top();
		s.pop();
		sort();
		sortedInsert(s,x);
	}
}

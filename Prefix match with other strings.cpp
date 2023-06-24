Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1115 /1115
Total Points Scored: 
4 /4
Your Total Score: 
2564
Total Time Taken: 
0.11
Your Accuracy: 
100%
Attempts No.: 
1

struct Node{
    int freq;
    Node* child[26];
    Node(){
        for(int i=0;i<26;i++)child[i]=NULL;
        freq=0;
    }
};

void insert(Node* root,string &s){
   for(int i=0;i<s.size();i++){
       if(root->child[s[i]-'a']){
           root=root->child[s[i]-'a'];
           root->freq++;
       }
       else{
           root->child[s[i]-'a']= new Node();
           root=root->child[s[i]-'a'];
           root->freq++;
       }
   }
}
int find(Node* root,string &s,int k){
    for(int i=0;i<k;i++){
        if(root->child[s[i]-'a']){
            root=root->child[s[i]-'a'];
        }
        else return 0;
    }
    return root->freq;
}
class Solution{   
public:
    int klengthpref(string arr[], int n, int k, string s){   
        if(k>s.length())return 0;
      s=s.substr(0,k);
        Node* root=new Node();
      for(int i=0;i<n;i++)insert(root,arr[i]);
      return find(root,s,k);
    }
};

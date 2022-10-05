Output Status : 

Problem Solved Successfully
Test Cases Passed: 
15 /15
Total Points Scored: 
4 /4
Your Total Score: 
1438
Total Time Taken: 
0.17
Your Accuracy: 
100%
Attempts No.: 
1

class Trie{
    public:
        Trie* next[26];
        int n;
        Trie(){
            for(int i = 0; i < 26; i++){
                next[i] = NULL;
            }
            n = 0;
        }
};
int find(string s, Trie * t){
    Trie* temp = t;
    for(int i = 0; i < s.size(); i++){
        if(temp->next[s[i]-'a']){
            temp = temp->next[s[i]-'a'];
        }else return 0;
    }
    return temp->n;
}
void insert(string s, Trie* t){
    Trie * temp = t;
    temp->n++;
    for(int i = 0; i < s.size(); i++){
        if(temp->next[s[i] - 'a'] != NULL){
            temp->next[s[i] - 'a']->n++;
        }else{
            temp->next[s[i] - 'a'] = new Trie();
            temp->next[s[i] - 'a']->n = 1;
        }
        temp = temp->next[s[i] - 'a'];
    }
}
class Solution{
public:
    vector<int> prefixCount(int N, int Q, string li[], string query[])
    {
        Trie* root = new Trie();
        for(int i = 0; i < N; i++){
            insert(li[i], root);
        }
        vector<int> res(Q, 0);
        for(int i = 0 ; i < Q; i++){
            res[i] = find(query[i], root);
        }
        return res;
    }
};

#include<iostream>
#include<vector>
using namespace std;
class TrieNode{
    public:
    char data;
    bool isTerminal;
    TrieNode* children[26];

    TrieNode(char d)
    {
        this->data = d;

        this->isTerminal = false;

        for(int i = 0; i < 26; i++)
            children[i] = NULL;
    }
};
class Trie
{
    public:
    TrieNode* root;

    Trie()
    {
        root = new TrieNode('\0');
    }

    void insertHelper(TrieNode* root, string word)
    {
        //Base Case
        if(word.length() == 0){
            root->isTerminal = true;
            return;
        }
        
        //Current Character fetch
        char ch = word[0];
        //Map char to an index integer
        int index = ch - 'a';

        TrieNode* child;

        /*Here 2 Case are Present
        Alphabet Present or Not*/
        if(root->children[index] != NULL)
        {
            //Present Case
            child = root->children[index];
        }
        else
        {
            child = new TrieNode(ch);
            root->children[index] = child;
        }
        //Recursion will take remaining string
        insertHelper(child,word.substr(1));

    }
    void insert(string word)
    {
        insertHelper(root, word);
    }

    bool searchHelper(TrieNode* root, string word)
    {
        //Base Case
        if(word.length() == 0)
        {
            return root->isTerminal;
        }

        //Fetch Current Character
        char ch = word[0];
        //Mapping Character to an Index Integer
        int index = ch - 'a';

        TrieNode * child;
        /*Here 2 Case are Present
        Alphabet Present or Not*/
        if(root->children[index] != NULL)
        {
            //Present Case
            child = root->children[index];
        }
        else
        {
            return false;
        }
        //Recursion
        return searchHelper(child, word.substr(1));
    }
    bool search(string word)
    {
        return searchHelper(root, word);
    }

    void getName(TrieNode* curr, string prefix, vector<string>& temp)
    {
        //Base Case
        if(curr->isTerminal == true)
            temp.push_back(prefix);
        
        for(char ch = 'a'; ch <= 'z'; ch++)
        {
            

            TrieNode* next = curr->children[ch-'a'];

            //Found
            if(next != NULL)
            {
                prefix.push_back(ch);
                //Recursion
                getName(next, prefix, temp);
                //BackTrack
                prefix.pop_back();
            }
        }
    }
    vector<vector<string> > getAnswer(string word) {

            TrieNode* prev = root;
            vector<vector<string> > answer;
            string prefix = "";

            for(int i=0; i<word.length(); i++) {
                char lastCh = word[i];

                prefix.push_back(lastCh);

                TrieNode* curr = prev->children[lastCh-'a'];

                //not found
                if(curr == NULL) {
                    break;
                }
                else {
                    //found
                    vector<string> tempAns;
                    getName(curr, prefix, tempAns);

                    answer.push_back(tempAns);
                 
                    prev = curr;
                }
            }
            return answer;
        }

};
    vector<vector<string> > solve(vector<string> &contactList, string query) {
    //step1: create trie
    Trie* t = new Trie();

    //step2:insert all contact in trie
    for(int i=0; i<contactList.size(); i++) {
        string str = contactList[i];
        t->insert(str);
    }

    //step3: getAnswer call
    return t->getAnswer(query);

}
int main() {
    vector<string> contactList;

    //insert code
    contactList.push_back("deepak");
    contactList.push_back("deepu");
    contactList.push_back("deepa");
    contactList.push_back("dipsha");
    contactList.push_back("didi");
    contactList.push_back("disha");
    contactList.push_back("dipuka");
    cout<<endl;
    string word = "dipi";
    vector<vector<string>> answer = solve(contactList, word);
    cout<<"Printing the answer"<<endl;
    for(int i = 0; i < answer.size(); i++)
    {
        for(int j = 0; j < answer[i].size(); j++)
        {
            cout<<answer[i][j]<<", ";
        }
        cout<<endl<<endl;
    }
    return 0;
}
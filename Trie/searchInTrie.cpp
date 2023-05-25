#include<iostream>
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
        cout<<word<<"->Insert Successful"<<endl;
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
};
int main() {

    //trie create

    Trie* trie = new Trie();

    //insert code
    trie->insert("code");
    trie->insert("coding");
    trie->insert("codemonk");
    trie->insert("coder");
    trie->insert("codee");

    cout<<trie->search("code")<<endl;
    return 0;
}
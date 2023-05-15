#ifndef AUTOCOMPLETE_H
#define AUTOCOMPLETE_H

#include <vector>
#include <string>


class Autocomplete {
    private:
        struct TrieNode{
            std::vector<TrieNode *> children;
            bool isEndOfWord;

            TrieNode() {
                isEndOfWord = false;
                children = std::vector<TrieNode*>(26, nullptr);
            }
        };

        TrieNode *root;

    public:
    Autocomplete();
    void insert(std::string word);

    bool getSuggestions(std::string partialWord) {
        TrieNode* currentNode = root;
        for (char c : partialWord) {
        int in = c - 'a'; // Assuming lowercase English alphabet
            if (currentNode->children[in] == nullptr) {
                return false;
            }
            currentNode = currentNode->children[in];
        }

        return true;  // Return true if the partial word is found in the trie
    }
};

#endif

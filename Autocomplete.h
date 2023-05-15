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

    vector<string> getSuggestions(std::string partialWord) {
        TrieNode* currentNode = root;
        vector<string> suggestions;
        for (char c : partialWord) {
        int in = c - 'a'; // Assuming lowercase English alphabet
            if (currentNode->children[in] == nullptr) {
                return suggestions;
            }
            currentNode = currentNode->children[in];
        }

        return suggestions;  // Return true if the partial word is found in the trie
    }
};

#endif

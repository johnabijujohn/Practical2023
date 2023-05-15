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

    std::vector<std::string> getSuggestions(std::string partialWord) {
        std::vector<std::string> suggestion;
        return suggestion;
    }
};

#endif

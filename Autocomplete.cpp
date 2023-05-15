#include "Autocomplete.h"
#include <string>   
    
Autocomplete::Autocomplete() {
    root = new TrieNode();
}
    
void Autocomplete::insert(std::string word) {
    TrieNode* currentNode = root;

    for (int i = 0; i < word.length(); i++) {
    char c = word[i];
    int in = c - 'a'; // Assuming lowercase English alphabet
        if (currentNode->children[in] == nullptr) {
            currentNode->children[in] = new TrieNode();
        }
        currentNode = currentNode->children[in];
    }

    currentNode->isEndOfWord = true;
}
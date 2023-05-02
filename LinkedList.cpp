#include "LinkedList.h"

#include <iostream>

LinkedList::LinkedList() { head = nullptr; }

LinkedList::LinkedList(int* array, int len) {

}

LinkedList::~LinkedList() {
  while (head != nullptr) {
    if (head == nullptr) {
      return;
    }

    Node* temp = head;
    head = head->get_Link();
    delete temp;
  }
}


void LinkedList::insertPosition(int pos, int newNum) {
    // if adding in front of the current head (including if the list is empty)
    if (pos == 0) {
        head = new Node(newNum, head);
        return;
    }

    // if inserting between two nodes; i.e. [A, C] -> [A, B, C]
    Node *prevNode = traverse(pos-1);

    // if inserting out of bounds, abort
    if (prevNode == nullptr) {
        return;
    }

    Node *newNode  = new Node(newNum, prevNode->get_Link());
    prevNode->set_Link(newNode);
}

Node* LinkedList::traverse(unsigned int index) {
    unsigned int position = 0;
    Node* currNode = head; 

    while (currNode != nullptr && position < index) { 
        currNode = currNode->get_Link(); 
        position++;
    } 
    
    return currNode;
}

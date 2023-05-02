#include "Human.h"

#include <iostream>

char Human::makeMove() {
  std::cout << "Enter move: ";
  std::cin >> Move;
  return Move;
}

Human::Human(std::string name) { Name = name; };

Human::Human() { Name = "Human"; }
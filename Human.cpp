#include "Human.h"
#include <iostream>
#include <string>

Human::Human(std::string inputName) { name = inputName; };

Human::Human() { name = "Human"; }

std::string Human::getMove() { return move; };

Move* Human::makeMove() {
  std::cout << "Enter move: ";
  std::cin >> move;
  if (move == "Rock") {
    return new Rock();
  } else if (move == "Paper") {
    return new Paper();
  } else if (move == "Scissors") {
    return new Scissors();
  } else if (move == "Robot") {
    return new Robot();
  } else if (move == "Monkey") {
    return new Monkey();
  } else if (move == "Pirate") {
    return new Pirate();
  } else if (move == "Ninja") {
    return new Ninja();
  } else if (move == "Zombie") {
    return new Zombie();
  }
  return 0;
};
#ifndef HUMAN_H
#define HUMAN_H
#include "Move.h"
#include "Player.h"

class Human : public Player {
 public:
  Human(std::string inputName);
  Human();
  Move* makeMove();
  std::string getMove();
};

#endif
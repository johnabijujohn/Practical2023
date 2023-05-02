#ifndef HUMAN_H
#define HUMAN_H
#include "Player.h"

class Human : public Player {
 public:
  Human(std::string);
  Human();
  char makeMove();
};

#endif
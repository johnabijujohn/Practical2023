#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include "Move.h"

class Player {
 protected:
  std::string name;
  std::string move;

 public:
  virtual Move* makeMove() = 0;
  std::string getName();
};
#endif
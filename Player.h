#ifndef PLAYER_H
#define PLAYER_H
#include <string>

class Player {
 protected:
  std::string Name;
  char Move;

 public:
  virtual char makeMove() = 0;
  std::string getName();
};

#endif
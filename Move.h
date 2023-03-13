#ifndef MOVE_H
#define MOVE_H
#include <string>

class Move {
 public:
  Move* makeMove();
  virtual std::string getName() = 0;
};

class Rock : public Move {
 public:
  std::string getName() { return "Rock"; };
};
class Paper : public Move {
 public:
  std::string getName() { return "Paper"; };
};
class Scissors : public Move {
 public:
  std::string getName() { return "Scissors"; };
};
class Robot : public Move {
 public:
  std::string getName() { return "Robot"; };
};
class Monkey : public Move {
 public:
  std::string getName() { return "Monkey"; };
};
class Pirate : public Move {
 public:
  std::string getName() { return "Pirate"; };
};
class Ninja : public Move {
 public:
  std::string getName() { return "Ninja"; };
};
class Zombie : public Move {
 public:
  std::string getName() { return "Zombie"; };
};
#endif
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
  std::string getName() {
    std::cout << "Rock" << std::endl;
    return "Rock";
  };
};
class Paper : public Move {
 public:
  std::string getName() {
    std::cout << "Paper" << std::endl;
    return "Paper";
  };
};
class Scissors : public Move {
 public:
  std::string getName() {
    std::cout << "Scissors" << std::endl;
    return "Scissors";
  };
};
class Robot : public Move {
 public:
  std::string getName() {
    std::cout << "Robot" << std::endl;
    return "Robot";
  };
};
class Monkey : public Move {
 public:
  std::string getName() {
    std::cout << "Monkey" << std::endl;
    return "Monkey";
  };
};
class Pirate : public Move {
 public:
  std::string getName() {
    std::cout << "Pirate" << std::endl;
    return "Pirate";
  };
};
class Ninja : public Move {
 public:
  std::string getName() {
    std::cout << "Ninja" << std::endl;
    return "Ninja";
  };
};
class Zombie : public Move {
 public:
  std::string getName() {
    std::cout << "Zombie" << std::endl;
    return "Zombie";
  };
};
#endif

#include "Computer.h"

Computer::Computer() {
  Name = "Computer";
  Move = 'R';
};

char Computer::makeMove() { return Move; }
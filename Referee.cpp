#include "Referee.h"

#include <iostream>

Player* Referee::refGame(Player* player1, Player* player2) {
  switch (player1->makeMove()) {
    case ('R'):
      return nullptr;

    case ('P'):
      return player1;

    default:
      return player2;
  }
};
#include "Referee.h"
#include <iostream>
#include "Move.h"

Player* Referee::refGame(Player* player1, Player* player2) {
  Move* playerMove1 = player1->makeMove();
  Move* playerMove2 = player2->makeMove();

  std::string playerMove1Name = playerMove1->getName();
  std::string playerMove2Name = playerMove2->getName();

  if (playerMove1Name == "Rock") {
    if (playerMove2Name == "Scissors") {
      return player1;
    } else if (playerMove2Name == "Paper") {
      return player2;
    } else {
      return nullptr;
    }
  } else if (playerMove1Name == "Paper") {
    if (playerMove2Name == "Rock") {
      return player1;
    } else if (playerMove2Name == "Scissors") {
      return player2;
    } else {
      return nullptr;
    }
  } else if (playerMove1Name == "Scissors") {
    if (playerMove2Name == "Paper") {
      return player1;
    } else if (playerMove2Name == "Rock") {
      return player2;
    } else {
      return nullptr;
    }
  } else if (playerMove1Name == playerMove2Name) {
    return nullptr;
  } else if (playerMove1Name == "Monkey") {
    if (playerMove2Name == "Ninja" || playerMove2Name == "Robot") {
      return player1;
    } else {
      return player2;
    };
  } else if (playerMove1Name == "Robot") {
    if (playerMove2Name == "Ninja" || playerMove2Name == "Zombie") {
      return player1;
    } else {
      return player2;
    };
  } else if (playerMove1Name == "Pirate") {
    if (playerMove2Name == "Robot" || playerMove2Name == "Monkey") {
      return player1;
    } else {
      return player2;
    };
  } else if (playerMove1Name == "Ninja") {
    if (playerMove2Name == "Pirate" || playerMove2Name == "Zombie") {
      return player1;
    } else {
      return player2;
    };
  } else if (playerMove1Name == "Zombie") {
    if (playerMove2Name == "Pirate" || playerMove2Name == "Monkey") {
      return player1;
    } else {
      return player2;
    };
  }
  return nullptr;
};

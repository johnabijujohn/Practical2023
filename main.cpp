#include "Human.h"
#include "Computer.h"
#include "Referee.h"
#include <iostream>

int main() {
    Human player1 = Human("Human");
    Computer player2 = Computer();
    player1.makeMove();
};
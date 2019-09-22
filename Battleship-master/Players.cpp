/********************************************************
 * @file Players.cpp
 * @brief Implement the set and get functions
 */
#include "Players.h"

Players::Players(){
	myBoard = new Boards();
}

Players::~Players(){
	delete myBoard;
}

Boards* Players::getBoard() const {
	return myBoard;
}

void Players::setBoard(Boards* newBoard) {
	myBoard = newBoard;
}

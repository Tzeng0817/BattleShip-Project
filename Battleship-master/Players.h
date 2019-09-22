/********************************************************
 * @file Players.h
 * @brief Header file for players to create boards
 */
#ifndef PLAYERS_H
#define PLAYERS_H

#include "Boards.h"

class Players{
private:
	///Create an object to access to board class
	Boards* myBoard;
public:
	/************************************
	 * Constructor/Deconstructor
	 ***********************************/
 	Players();
	~Players();
	/************************************
	 * Get/Set Functions
	 ***********************************/
    /**
    *@pre none
    *@post get boards using given location
    *@post returns nothing
    **/
	Boards* getBoard() const;
    /**
    *@pre The board that is created
    *@post Set the demanded location
    **/
	void setBoard(Boards* newBoard);
	/************************************
	 * Functions
	 ***********************************/
};
#endif

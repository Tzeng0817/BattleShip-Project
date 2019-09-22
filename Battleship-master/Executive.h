/********************************************************
 * @file Executive.h
 * @brief Header file to execute different classes
 */
#ifndef EXECUTIVE_H
#define EXECUTIVE_H
#include "Boards.h"
using namespace std;
class Executive
{
    private:
        ///User's choice of row they want to place and fire
        int row;
        ///User's choice of row they want to place and fire
        char column;
        ///Creating an object for player one
        Boards* playerOne = new Boards();
        ///Creating an object for player two
        Boards* playerTwo = new Boards();
        ///Allow user to enter the number of ships
		int numberOfShips;

    public:
        /**
        *@pre none
        *@post primary constructor of the Executive class
        *@post returns nothing
        **/
        Executive();
        /**
        *@pre none
        *@post destructor of the Executive class
        *@post returns nothing
        **/
        ~Executive();
        /**
        *@pre takes a string for the filename
        *@post run determines which mode to run the program in
        *@post returns nothing
        **/
        void run();
        /**
         * @pre Game has begun.
         * @post Gets the row the user wants to attack.
         */
        void getRow();
        /**
         * @pre Game has begun.
         * @post Gets the column the user wants to attack.
         */
        void getColumn();
        /**
         * @pre none
         * @post Literally just adds like 100 new lines so that you can't cheat.
         */
        void addSpace(int);
};
#endif

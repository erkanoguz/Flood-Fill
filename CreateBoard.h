#ifndef __CREATEBOARD__H
#define __CREATEBOARD__H

#include <vector>
#include <iostream>
#include <stdexcept>
#include "BoardInterface.h" 

using namespace std;

class CreateBoard   :public BoardInterface
{
    public:

        CreateBoard() {}
        ~CreateBoard() {}
        // Override
        void SetSize(const int numRows, const int numCols);    // Set size of the board
        // Override
        void GetSize(int & numRows, int &numCols);            // Get size of the board
        // Override
        void SetZero(const int row, const int col);    // Set zero the specified member of board
        // Override
        void SetOne(const int row, const int col);     // Set One the specified member of board
        // Override
        bool isFilled(const int row, const int col);   // Check the specified member of board is fill
        void Print();                          // Print the board 


    private:
        int numRows;                        // number of rows 
        int numCols;                        // number of column
        vector<vector<int>> board;          // 2D array to hold board
};


    
#endif // !__CREATEBOARD__H

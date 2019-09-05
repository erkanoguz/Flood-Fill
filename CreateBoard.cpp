#include "CreateBoard.h"


void CreateBoard::SetSize(const int numRows, const int numCols)
{
    /*Sets the size of board*/
   
    this -> numRows = numRows;
    this -> numCols = numCols;
    board.resize(numRows, vector<int>(numCols,0));  // Initialize the board

}// end of SetSize

void CreateBoard::GetSize(int & numRows, int & numCols)
{
    /*Returns the size of board*/

    // check the vector is empty
    if (!board.empty())
    {
        numRows = this -> numRows;   // return number of row
        numCols = this -> numCols;   // return number of column 
    }
    else 
    {
        cerr << "vector is empty!" << endl;
    }
        
}// end of GetSize


void CreateBoard::SetZero(const int row, const int col)
{
    /*Sets zero the specified member of vecetor*/
    
    // check the vector is empty
    if (!board.empty())
    {
        try
        {
            if (row >= numRows || row < 0) throw row;
            if (col >= numCols || col < 0) throw col;

            board [row][col] = 0; // set sero
        }
        catch(int i)// Vector throws an out of range 
        {
            cerr << "Out of range error: " << i << endl;
        }
    }
    else
    {
        cerr << "Board is empty!" << endl;
    }

}// end of SetZoro

void CreateBoard::SetOne(const int row, const int col)
{
    if (!board.empty())
    {
        try
        {
            if (row >= numRows || row < 0) throw row;
            if (col >= numCols || col < 0) throw col;

            board[row][col] = 1;  // set one
        }
        catch(int i) // Vector throws an out of range
        {
            cerr << "Out of range error: " << endl;
        }
    }
    else
    {
        cerr << "Board is empty!" << endl;
    }

}// end of SetOne


bool CreateBoard::isFilled(const int row, const int col)
{
    /*Check the specified member of vector is fill*/
    
    if (!board.empty())
    {
        try
        {
            if (row >= numRows || row < 0) throw row;
            if (col >= numCols || col < 0) throw col;

            if (board[row][col] == 1)
                return true;
            else
                return false;

        }
        catch(int i) // Vector throws an out of range
        {
            cerr << "Out of range error: " << i << endl; 
        }
    }
    else
    {
        cerr << "vector is empty!" << endl;
    }

}// end of isFilled


void CreateBoard::Print()
{
    /*Prints the board*/
    
    if (!board.empty())
    {
        for (int r = 0; r < numRows; r++)
        {
            for (int c = 0; c < numCols; c++)
            {
                cout << board[r][c] << " ";
            }
            cout << endl;
        }

    }
    else
    {
        cerr << "Board is empty!" << endl;
    }

}// end of Print




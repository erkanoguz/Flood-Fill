#include "Solution.h"




Solution::Solution () {}

void Solution::Init(BoardInterface *& board)
{
    /*Initialize the system*/

    this -> board = board;
    board -> GetSize(numRows, numCols);     // Get the size of board

}// enf of Init

int Solution::Run()
{
    /*Start counting group*/

    int numberOfGroup = CountGroup();       // Count the Group
    return numberOfGroup;           

} // end of soution Run


void Solution::LabelGroup(const int row, const int col, const int prevValue)
{
    /*access each member of group and label them*/

    // Check out of range
    if (row < 0 || col < 0 || row >= numRows || col >= numCols)
        return; 
    // Check specified memeber is fill
    if (!board -> isFilled(row,col))
        return;

    board -> SetZero(row,col);  // assing zero each filled member

    // look neighbours 
    LabelGroup(row - 1, col, prevValue);     
    LabelGroup(row + 1, col, prevValue);
    LabelGroup(row, col - 1, prevValue);
    LabelGroup(row, col + 1, prevValue);

} // end of LabelGroup

int Solution::CountGroup()
{   
    /* Counts each group */

    int numberOfGroup = 2; 
    int prevValue = 1;


    for (int r = 0; r < numRows; r++)
    {
        for (int c = 0; c < numCols; c++)
        {
            if (board -> isFilled(r,c)) // check the specified member is fill
            {
                LabelGroup(r,c,prevValue);
                ++numberOfGroup;
            }
        }
    }

    numberOfGroup = numberOfGroup - 2;
    return numberOfGroup;

} // end of CountGroup







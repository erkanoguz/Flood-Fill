#ifndef __SOLUTION_H
#define __SOLUTION_H

#include <iostream>
#include <stdexcept>
#include <vector>
#include "SolutionInterface.h"
#include "CreateBoard.h"
//#include "BoardInterface.h"

using namespace std;


class Solution :public SolutionInterface
{
    public:
        
        // constructor
        Solution();
		~Solution() {}
        // Override
        void Init(BoardInterface *& 	);                 // Initialize the board
        
        // Override
        int Run();                                          // Run the system
        
        void LabelGroup(const int, const int, const int);   // label each  grup
        int CountGroup();                                   // Count gruops
        

    private:
        BoardInterface * board;     // Holds BoardInterface
        int numCols;                // number of columns
        int numRows;                // number of rows
};       



#endif // __SOLUTION_H

#include "SolutionFactory.hpp"

CreateBoard *SolutionFactory::getBoard()
{
	CreateBoard * board = new CreateBoard();
	return board;
}

Solution * SolutionFactory::getSolution()
{
	Solution * solutionObject = new Solution();
	return solutionObject;
}



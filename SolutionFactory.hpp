#ifndef SOLUTION_FACTORY_H
#define SOLUTION_FACTORY_H



#include <iostream>
#include "Solution.h"


using namespace std;

class SolutionFactory
{
	public:
		static CreateBoard * getBoard();
		static Solution * getSolution();

};

#endif // !SOLUTION_FACTORY_H





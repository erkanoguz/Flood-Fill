#ifndef SOLUTIONINTERFACE_H
#define SOLUTIONINTERFACE_H


#include "BoardInterface.h"

using namespace std;

class SolutionInterface 
{
    public:

        virtual ~SolutionInterface() {}

        virtual void Init(BoardInterface* & board) = 0;

        virtual int Run() = 0;

        //virtual Exit() = 0;
};



#endif // !SOLUTIONINTERFACE
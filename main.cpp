#include "SolutionFactory.hpp"


using namespace std;


int main()
{
	
	int numRows = 0, numCols = 0;
	//  position of the filled member of board
	int blackPosition[19][2] = { { 0,2 },{ 0,15 },{ 1,15 },{ 2,9 },{ 3,9 },{ 3,10 },{ 3,11 },{ 4,4 },
								{ 4,5 },{ 4,9 },{ 5,4 },{ 7,0 },{ 7,1 },{ 7,9 },{ 7,11 },{ 8,1 },{ 8,9 },
								{ 8,10 },{ 9,10 }};
	
	BoardInterface * board = SolutionFactory::getBoard();
    SolutionInterface * solution = SolutionFactory::getSolution();

	board->SetSize(10, 16);									// Set Size of board
	board->GetSize(numRows, numCols);						// Get Size of board
	cout << "number of rows: " << numRows << endl;
	cout << "number of column: " << numCols << endl;		 
	//board->Print();											// Print board

	//cout << "CHANGED THE BOARD " << endl;
	
	/*Initialize the filled area in the board*/
	for (int i = 0; i < 19; i++)
	{
		int r = blackPosition[i][0];
		int c = blackPosition[i][1];
		board->SetOne(r, c);
	}

	// Print after changing the board
	board->Print();						// Print board
	

	/************SOUTION PART**************/
	solution->Init(board);									// Initialize the board
	int numberOfGroups = solution-> Run();					// Run the system and solve problem
	cout << "number of group: " << numberOfGroups << endl;	// print result

	system("pause");
	return 0;
}




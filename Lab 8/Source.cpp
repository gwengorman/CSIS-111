//BattleShip -- coding for battleship game 

//CSIS 111-B02

//Include statements

#include <iostream>
#include <string>
#include <fstream>


using namespace std;

//Global declarations: Constants and type definitions only -- no variables

const int ARRAY_SIZE = 25;


//Function prototypes

void wait(); //Causes the program to pause until the user presses the Enter key

int Fire(int, char[][ARRAY_SIZE]);

bool FleetSunk(int);



int main()

{


	cout << "Gwen Gorman -- Lab 8" << endl << endl;



	//Variable declarations

	ifstream inputFile;

	char inChar;

	int totalHits = 0;

	char board[ARRAY_SIZE][ARRAY_SIZE];



	//Program logic



	// Opens file that contains the game board

	inputFile.open("Text.txt");



	// Reads in game board from file into a 25x25 array

	for (int i = 0; i < ARRAY_SIZE; i++)

	{

		for (int j = 0; j < ARRAY_SIZE; j++)

		{

			inputFile >> inChar;

			board[i][j] = inChar;

		}

	}


	// Loops through users attack until all ships are destroyed

	do

	{

		totalHits = Fire(totalHits, board);

	} while (!FleetSunk(totalHits));



	// Outputs when all ships were destroyed

	cout << "Your fleet was destroyed!" << endl;



	//Closing program statements

	wait(); //Pause the program

	return 0;

}



// Asks user for coordinates of attack, checks to see if its a hit, outputs result, and adds to total number of hits

int Fire(int totalHits, char board[][ARRAY_SIZE])

{

	// Variable declarations

	int Y;

	int X;



	// Asks user for coordinates 

	cout << "Enter the coordinates numbers 1 through 25 separated by a space of where you would like to hit" << endl;

	cin >> Y >> X;


	// Checks to see if user hit a ship

	if (board[Y][X] == '#')

	{

		totalHits++;

		cout << "HIT" << endl;

		board[Y][X] = 'H';

	}

	else if (board[Y][X] == 'H')

	{

		cout << "HIT AGAIN" << endl;

	}

	else

	{

		cout << "MISS" << endl;

	}



	// Returns total hits during game

	return totalHits;

}



// Checks to see if all the ships have been sunk

bool FleetSunk(int totalHits)

{

	// If user has detroyed the total number of ship parts, returns true and exits game loop

	if (totalHits == 37)

		return true;

	else

		return false;

}



//Function definitions

void wait()

{

	//The following if-statement checks to see how many characters are in cin's buffer

	//If the buffer has characters in it, the clear and ignore methods get rid of them.

	if (cin.rdbuf()->in_avail() > 0) //If the buffer is empty skip clear and ignore

	{

		cin.clear();

		cin.ignore(256, '\n'); //Clear the input buffer 

	}

	char ch;

	cout << "Press the Enter key to continue ... ";

	cin.get(ch);

}

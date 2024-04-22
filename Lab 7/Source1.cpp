//Arrays -- files computes the weight on a planet at users request 

//CSIS 111-B02

//Include statements

#include <iostream>

#include <string>

using namespace std;

//Global declarations: Constants and type definitions only -- no variables

enum PlanetType { Mercury, Venus, Earth, Moon, Mars, Jupitar, Saturn, Uranus, Neptune, Pluto };



//Function prototypes

void wait(); //Causes the program to pause until the user presses the Enter key

bool ValidPlanet(string userInput, PlanetType&);



int main()

{

	//In cout statement below substitute your name and lab number

	cout << "Gwen Gorman --Lab 7" << endl << endl;


	//Variable declarations

	float weight;

	string userInput;

	PlanetType planet;



	//Program logic



	// input user weight

	cout << "Please enter your weight" << endl;

	cin >> weight;



	// Asks user for name of planet 

	do

	{

		cout << "Please enter the name of a planet (First letter uppercase, all others lowercase)" << endl;

		cin >> userInput;



		// Starting planet value to MERCURY

		planet = Mercury;



	} while (!ValidPlanet(userInput, planet));



	// Uses a switch statement to select multiplier for the planet the user selected

	switch (planet)

	{

	case Mercury: weight *= 0.4155; break;

	case Venus: weight *= 0.8975; break;

	case Earth: break;

	case Moon: weight *= 0.166; break;

	case Mars: weight *= 0.3507; break;

	case Jupitar: weight *= 2.5374; break;

	case Saturn: weight *= 1.0677; break;

	case Uranus: weight *= 0.8947; break;

	case Neptune: weight *= 1.1794; break;

	case Pluto: weight *= 0.0899; break;

	}



	// Results

	cout << "Your weight on " << userInput << " would be " << weight << " pounds" << endl;



	//Closing program statements

	wait(); //Pause the program

	return 0;

}



// Confirms that input planet is a valid name

bool ValidPlanet(string userInput, PlanetType& planet)

{

	// Declare variables

	bool flag;

	PlanetType TypeInput;



	// If-else

	if (userInput == "Mercury")

		TypeInput = Mercury;

	else if (userInput == "Venus")

		TypeInput = Venus;

	else if (userInput == "Earth")

		TypeInput = Earth;

	else if (userInput == "Moon")

		TypeInput = Moon;

	else if (userInput == "Mars")

		TypeInput = Mars;

	else if (userInput == "Jupitar")

		TypeInput = Jupitar;

	else if (userInput == "Saturn")

		TypeInput = Saturn;

	else if (userInput == "Uranus")

		TypeInput = Uranus;

	else if (userInput == "Neptune")

		TypeInput = Neptune;

	else if (userInput == "Pluto")

		TypeInput = Pluto;

	else

	{

		cout << userInput << " is not a valid planet in Earth's solar system. Please try again" << endl;

		return false;

	}


	// Loops through values of PlanetType to set users value

	for (int i = 0; i < 11; i++)

	{

		if (TypeInput == planet)

			return true;

		else

			planet = PlanetType(planet + 1);

	}

}



//Function definitions

void wait()

{

	//Checks to see how many characters are in cin's buffer

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
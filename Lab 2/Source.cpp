//Permutations.cpp -- Calculates the number of different programming teams

//                    of three people can be made from a class of 18 students 

//CSIS 111-B02

//Public Domain





//Include statements

#include <iostream>
#include <string>
#include <cmath>



using namespace std;



//Global declarations: Constants and type definitions only -- no variables

const double n = 18; // Number of students

const double r = 3; // Number of students on each programming team

const double pi = 3.14159265368979; //Numerical estimated value of Pi



int main()

{



	// In cout statement below substitute your name and lab number

	cout << "Gwen Gorman -- Lab 2" << endl << endl;

	//I have read and understand the Lab Submittal Policy document on Bb.



	// Variables

	int teamPossibilities; // Possible combinations of students



	//Program logic

	teamPossibilities = (exp(-n) * pow(n, n) * sqrt(2 * pi * n)) / (exp(-r) * pow(r, r) * sqrt(2 * pi * r) * exp(-(n - r)) * pow((n - r), (n - r)) * sqrt(2 * pi * (n - r)));



	// Output

	cout << "The number of possible team combinations of 18 students in teams of 3 is " << teamPossibilities << endl;



	//Closing program statements

	system("pause");

	return 0;

}

//Function Definitions
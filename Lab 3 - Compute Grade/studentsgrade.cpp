//ComputeGrade -- takes students scores from a file and gives appropriate letter grade


//CSIS 111-B02


//Include statements


#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
#include <iomanip>


using namespace std;


int main()


{


	// In cout statement below substitute your name and lab number


	cout << "Gwen Gorman -- Lab 3" << endl << endl;


	// Variable declarations


	ifstream input;


	float score, total, grade;



	// Program logic


	input.open("StudentGrades.txt");


	input >> score >> total;



	// Calculates the student score and multiplies it by 100 to get percentages.


	float rawScore = score / total * 100;


	cout << fixed << showpoint << setprecision(5) << "Raw score is " << rawScore << endl;



	// if-else statement


	grade = ceil(rawScore);



	// Outputs letter grade based off of number grade


	if (grade > 90)


		cout << "Excellent" << endl;


	else if (grade > 80)


		cout << "Well Done" << endl;


	else if (grade > 70)


		cout << "Good" << endl;


	else if (grade > 60)


		cout << "Need improvement" << endl;


	else

		cout << "Fail" << endl;



	//Closing program statements


	system("pause");


	return 0;


}
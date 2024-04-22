//GradeOutput -- take students scores from text file and outputs letter grade
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

	cout << "Gwen Gorman -- Lab 5" << endl << endl;

	// Variable declarations

	ifstream input;

	float score, total, grade;

	// Program input

	input.open("StudentChart.txt");

	input >> score >> total;



	// Calculates score and multiplies by 100 to get percentage.

	float rawScore = score / total * 100;

	cout << fixed << showpoint << setprecision(5) << "Raw score is " << rawScore << endl;



	// Calculates grade for if-else statement

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
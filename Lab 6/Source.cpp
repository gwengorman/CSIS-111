//<Lumber Company> -- program that computes cost of lumber for an order 
//CSIS 111-<B02> 

//Include statements 
#include <iostream> 
#include <string> 
using namespace std; 

//Function prototype
double FindCost (char woodType, int numPieces, int width, int length, int height); 

void main()
{
	//variable declaration
	char woodType;
	int numPieces, width, length, height;
	double total = 0.0, cost;

	do
	{
		//Prompt and read data from user
		cout << "Enter item:";
		cin >> woodType;
		if (woodType == 'T')
		{
			cout << "Total cost: $" << total << endl;
			break;
		}
		cin >> numPieces;
		cin >> width;
		cin >> length;
		cin >> height;
		cost = FindCost(woodType, numPieces, width, length, height); 
		cout << ", cost: $" << cost << endl;
		total += cost;
	} while (woodType != 'T');

	//pause system 
	system("pause");
} //end main

double FindCost(char woodType, int numPieces, int width, int length, int height)
{
	double cost;
	string name;
	cost = (length * width * height) / 12.0;
	cost = numPieces * cost;
	if (woodType == 'p')
	{
		cost = cost * 0.89;
		name = "Pine";
	}
	else if (woodType == 'F')
	{
		cost = cost * 1.09;
		name = "Fir";
	}
	else if (woodType == 'C')
	{
		cost = cost * 2.26;
			name = "Cedar";
	}
	else if (woodType == 'M')
	{
		cost = cost * 4.50;
		name = "Maple";
	}
	else if (woodType == 'O')
	{
		cost = cost * 3.10;
		name = "Oak";
	}
	cout << numPieces << " "
		<< width << "x" << length << "x" << height << name;
	return cost;
}

// Week 5 Programming Assignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

using namespace std;

//Delcares Constants
const double ITOTALSMALL = 175.00;
const double ITOTALMEDIUM = 190.00;
const double ITOTALLARGE = 200.00;
const double ITOTALXXXS = 15.00;

//Function Prototypes
void ShowUsage();
void MakePurchase(int& iTotalSmall, int& iTotalMedium, int& iTotalLarge, int& iTotalXXXS);
void DisplayPurchase(const int iTotalSmall, const int iTotalMedium, const int iTotalLarge, const int iTotalXXXS);
void DisplayTotal(const int iTotalSmall, const int iTotalMedium, const int iTotalLarge, const int iTotalXXXS);

//Main Function That Runs Program
int main()
{
	//Declares Variables
	char input = ' ';
	int total_small = 0;
	int total_med = 0;
	int total_large = 0;
	int total_xxxs = 0;

	//Prints Out Title Of The Program
	cout << setfill('*'); // Sets Fill
	cout << setw(100) << "*" << endl;
	cout << setw(75) << "Welcome to my Johnny Utah's PointBreak Surf Shop" << setw(25) << right << "*" << endl;
	cout << setw(100) << "*" << endl << endl << endl;

	//Calls ShowUsage Function To Show Program Instructions
	ShowUsage();

	do
	{
		//Asks User For Selection
		cout << "Please make a selection: ";
		cin >> input;

		//Determines Function Based On User Input
		if (input == 's' || input == 'S')
		{
			ShowUsage();
			cout << endl;
		}
		else if (input == 'p' || input == 'P')
		{
			MakePurchase(total_small, total_med, total_large, total_xxxs);
			cout << endl;
		}
		else if (input == 'c' || input == 'C')
		{
			DisplayPurchase(total_small, total_med, total_large, total_xxxs);
			cout << endl;
		}
		else if (input == 't' || input == 'T')
		{
			DisplayTotal(total_small, total_med, total_large, total_xxxs);
			cout << endl;
		}
	} while (input != 'q' && input != 'Q');


}

//ShowUsage Function
void ShowUsage()
{
	cout << "To show program usage 'S'" << endl;
	cout << "To purchase a surfboard press 'P'" << endl;
	cout << "To display current purchases press 'C'" << endl;
	cout << "To display total amount due press 'T'" << endl;
	cout << "To quit the program press 'Q'" << endl << endl;
}

//MakePurchase Function
void MakePurchase(int& iTotalSmall, int& iTotalMedium, int& iTotalLarge, int& iTotalXXXS)
{
	//Declare Variables For Function
	char type = ' ';
	int quantity;

	//Asks And Gets User Input
	cout << "Please enter the quantity and type (X = extremely small, S = small, M = medium, L = large)" << endl << "of surfboard you would like to purchase: ";
	cin >> quantity >> type;

	//Calculates Purchase
	if (type == 's' || type == 'S')
	{
		iTotalSmall = iTotalSmall + quantity;
	}
	else if (type == 'm' || type == 'M')
	{
		iTotalMedium = iTotalMedium + quantity;
	}
	else if (type == 'l' || type == 'L')
	{
		iTotalLarge = iTotalLarge + quantity;
	}
	else if (type == 'x' || type == 'X')
	{
		iTotalXXXS = iTotalXXXS + quantity;
	}
}

//DisplayPurchase Function
void DisplayPurchase(const int iTotalSmall, const int iTotalMedium, const int iTotalLarge, const int iTotalXXXS)
{
	//Determines If Small Boards Have Been Purchsed And Outputs Amount
	if (iTotalSmall > 0)
		cout << "The total number of small surf boards is " << iTotalSmall << endl;

	//Determines If Medium Boards Have Been Purchsed And Outputs Amount
	if (iTotalMedium > 0)
		cout << "The total number of medium surf boards is " << iTotalMedium << endl;

	//Determines If Large Boards Have Been Purchsed And Outputs Amount
	if (iTotalLarge > 0)
		cout << "The total number of large surf boards is " << iTotalLarge << endl;

	//Determines If Extremely Small Boards Have Been Purchased And Outputs Amount
	if (iTotalXXXS > 0)
		cout << "The total number of extremely small surf boards is " << iTotalXXXS << endl;

	//If No Purchases Have Been Made
	if (iTotalSmall == 0 && iTotalMedium == 0 && iTotalLarge == 0 && iTotalXXXS == 0)
		cout << "No purchases made yet." << endl;
}

//DisplayTotal Function
void DisplayTotal(const int iTotalSmall, const int iTotalMedium, const int iTotalLarge, const int iTotalXXXS)
{
	//Delcare Variables For Function
	double small_cost;
	double med_cost;
	double large_cost;
	double xxxs_cost;
	double total_cost = 0;

	//Determines If Small Boards Have Been Purchsed And Outputs Total
	if (iTotalSmall > 0)
	{
		small_cost = iTotalSmall * ITOTALSMALL;
		cout << fixed << showpoint << setprecision(2) << "The total number of small surf boards is " << iTotalSmall << " at a total of $" << small_cost << endl;
		total_cost = total_cost + small_cost;
	}

	//Determines If Medium Boards Have Been Purchsed And Outputs Total
	if (iTotalMedium > 0)
	{
		med_cost = iTotalMedium * ITOTALMEDIUM;
		cout << fixed << showpoint << setprecision(2) << "The total number of medium surf boards is " << iTotalMedium << " at a total of $" << med_cost << endl;
		total_cost = total_cost + med_cost;
	}

	//Determines If Large Boards Have Been Purchsed And Outputs Total
	if (iTotalLarge > 0)
	{
		large_cost = iTotalLarge * ITOTALLARGE;
		cout << fixed << showpoint << setprecision(2) << "The total number of large surf boards is " << iTotalLarge << " at a total of $" << large_cost << endl;
		total_cost = total_cost + large_cost;
	}

	//Determines If XXXS Boards Have Been Purchased And Outputs Total
	if (iTotalXXXS > 0)
	{
		xxxs_cost = iTotalXXXS * ITOTALXXXS;
		cout << fixed << showpoint << setprecision(2) << "The total number of extremely small surf boards is " << iTotalXXXS << " at a total of $" << xxxs_cost << endl;
		total_cost = total_cost + xxxs_cost;
	}

	//If No Purchases Have Been Made OutPut No Purchases Made Yet Else Output Total Amount
	if (iTotalSmall == 0 && iTotalMedium == 0 && iTotalLarge == 0 && iTotalXXXS == 0)
		cout << "No purchases made yet." << endl;
	else
		cout << fixed << showpoint << setprecision(2) << "Amount due: $" << total_cost << endl;
}
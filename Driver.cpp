// Author:			Bryan Wilson
// Assignment:		project5
// Instructor:		Reza Sanati
// Class:			CS 2420
// Date Written:	10 June 2014
// Description:		Hash Table
// 
// This is The user Interface file and is used to communicate with the user. 

#include <iostream>
#include <fstream>
#include <string>

// Function Name:		fib()
// Purpose:				find the next number in the Fibonacci sequence using recursion	
// Parameters:			One integer
// Returns:				integer that represents the next number
// Pre-conditions:		none
// Post-conditions:		none
int fib(int n);

// Function Name:		fibsum()
// Purpose:				find the next number in the Fibonacci sequence without recursion
// Parameters:			One integer
// Returns:				integer that represents the next number
// Pre-conditions:		none
// Post-conditions:		none
int fibSum(int n);

using namespace std;
int main()
{
	string fileIn;
	fstream readMe;
	int data;
	string leave = "exit";

	cout << "Bryan Wilson\n CS 2420,\tSec 001\nProject2: Linked Lists";
	do
	{
		do
		{
			cout << "\n\nPlease enter the name of a text file we can open to work with\n";			// Prompt the user to type txt file name
			cout << "\tNote that you must write the type of file EXAMPLE: `p3datafile.txt'\n :";
			cin >> fileIn;																			// Read file name
			if (fileIn == leave)																	// give the user a way out of the loop
			{
				return 0;
			}
			readMe.open(fileIn);																	// open the file that was used
			if (readMe.fail() )
			{
				cout << "\n\tTHE FILE DID NOT OPEN, check spelling and try again\n";				// If failed, give user another chance to open.
				cout << "\t If you would like to quit, type `exit'\n";
			}
		}while(readMe.fail());

		cout << "\nRecursion\n\tN\tFib(N)\n";						// display headers of columns to make things clear.
		do															// iterate through the data in the file
		{
			if(readMe.good())
			{
				readMe >> data;
				cout << "\t" << data << "\t" << fib(data) << "\n";	// read the data into the system
			}
		}while(!readMe.eof());

		readMe.clear();												// clear the end of file flag
		readMe.seekg(0,ios::beg);									// move back to the beginning of the file

		// here you are back to the beginning of the file so you can perform new operations.
		cout << "\nYou have finished reading the current file and it has closed.\n";
		do{
		cout << "Would you like to continue with another file? y/n: \n";
		cin	>> fileIn;
		}while (fileIn == "Y,y,N,n");//(fileIn == "Y" || fileIn == "y" || fileIn == "N" || fileIn == "n");
	}while (fileIn == "y"|| fileIn == "y");

	system("pause");											// pause to allow the user to finish the program.
	return 0;
}


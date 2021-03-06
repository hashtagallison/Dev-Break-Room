// Preprosessor directives
#include "stdafx.h"
#include <iostream> // Includes basic input/output
#include <string> // Allows the use of the string data type
using namespace std;

// Prototypes
void DuckDebug();
void BlackJack();
void Timer();
void Riddles();

// Main function

int main()

{
	int programChoice;
	// Intorduction & menu
	cout << "Welcome to the Developer Break Room!\n";
	cout << "Please choose a program by entering a number. \n";
	cout << "1. Duck Debugging\n";
	cout << "2. Black Jack\n";
	cout << "3. Timer\n";
	cout << "4. Riddles\n";

	cin >> programChoice;

	switch (programChoice) {

	case 1:
		DuckDebug();
		break;

	case 2:
		BlackJack();
		break;

	case 3:
		Timer();
		break;

	case 4:
		Riddles();
		break;

	default: // input validation
		cout << "Please enter a valid number\n";
		break;

	}
	return 0;
}


void DuckDebug() // Duck Debugging program

{

	/*
	Samuel Barlass
	12/7/2017
	This program displays random strings to keep the user talking
	*/

	int potato = 1; // Initializing the value that loops the string text answers from the duck
	// Duck Logo
	cout << "              __     " << endl;
	cout << "          ___( o)>   " << endl;
	cout << "          \\ <_. )    " << endl;
	cout << "           `---'     " << endl;

	cout << "Welcome to Duck Debugging! \nI am your personal unlicensed virtual mock philathropist!\n";
	cout << "please type ""exit"" when you are finished.\n\n";
	cout << "Please explain your problem to me in detail...\n";
	string x;
	getline(cin, x); //Original user input
	cin.ignore(1000, '\n'); // Ignores chars that could be sent to the next getline.

	while (potato == 1) // Loop function to keep displaying random responses.

	{
		
			int hotdog; // Defining value for the RTD function
				hotdog = rand() % 10 + 1;// RTD function giving hotdog a random value
			
			switch (hotdog) { // strings of text chosen randomly
			case 1:
				cout << "Please explain your problem to me in detail...\n";
				break;
			case 2:
				cout << "I see, continue...\n";
				break;
			case 3:
				cout << "Interesting...\n";
				break;
			case 4:
				cout << "Could you be more detailed?\n";
				break;
			case 5:
				cout << "I'm not familiar with that concept.. Could you explain it?\n";
				break;
			case 6:
				cout << "Interesting... Tell me more\n";
				break;
			case 7:
				cout << "That sounds frustrating, if you explained it more maybe I can help\n";
				break;
			case 8:
				cout << "Wow, that's really complex. Could you break it down for me?\n";
				break;
			case 9:
				cout << "Continue...\n";
				break;
			case 10:
				cout << "Have you tried turning it off and on again?\n";
				break;
				
			}
			
			getline(cin, x);
			cin.ignore(1000, '\n');
			if (x != "exit") { // If the user inputs anything other than "exit," then the program will continue.
				continue;
			}
			else
			{
				potato = 2; // Changes the value of the program's loop so that it becomes false, and does not coninue to execute.
			}
	}
}


void BlackJack()

{



}


void Timer()

{



}


void Riddles()

{



}



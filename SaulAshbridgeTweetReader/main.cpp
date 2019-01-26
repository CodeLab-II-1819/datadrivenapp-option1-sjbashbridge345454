#include <iostream>
#include <fstream>
#include <string>
#include "main.h"

using namespace std;

int main() {

	//Prints a short welcoming message
	cout << "Welcome! This application can be used to analyse tweets within the 'SampleTweets' data set." << endl;
	cout << "A guide to the options available is displayed below. Select an option to perform your search." << endl;
	cout << endl;
	//Calls the function 'guide', printing available options to the user
	guide();
	//Calls the function 'results', which in turn calls the function 'output', which calls the function 'optionSelect'
	results();
	//Displays short exit message (only executed when 'results' stops calling 'output', ie the user chooses to exit.
	cout << "You have chosen to exit the application." << endl;
	cout << "Thank you for using this Ashbridge Industries product!" << endl;
	cout << endl;

	//Prevents console window from closing immediately
	system("Pause");

}
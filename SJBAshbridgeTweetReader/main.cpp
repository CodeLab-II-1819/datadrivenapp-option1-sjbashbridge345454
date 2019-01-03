#include <iostream>
#include <fstream>
#include <string>
#include "main.h"

using namespace std;

	int main() {

		cout << "Welcome! This application can be used to analyse tweets within the 'SampleTweets' data set." << endl;
		cout << "A guide to the options available is displayed below. Select an option to perform your search." << endl;
		cout << endl;
		guide();
		results();
		cout << "You have chosen to exit the application." << endl;
		cout << "Thank you for using this Ashbridge Industries product!" << endl;
		cout << endl;

		system("Pause");

	}
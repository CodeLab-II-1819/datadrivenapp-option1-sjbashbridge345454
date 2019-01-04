#include <iostream>
#include <fstream>
#include <string>
#include "main.h"

using namespace std;

void guide() {

	cout << "GUIDE:" << endl;
	cout << endl;
	cout << "Count:" << endl;
	cout << endl;
	cout << "All Tweets in the data set - 0" << endl;
	cout << "Tweets mentioning 'Money' - 1" << endl;
	cout << "Tweets about politics - 2" << endl;
	cout << "Tweets published at exactly midnight - 3" << endl;
	cout << "Tweets published at exactly midday - 4" << endl;
	cout << endl;
	cout << "Count AND Display:" << endl;
	cout << endl;
	cout << "Tweets mentioning 'Uber' - 5" << endl;
	cout << "Tweets from April 2016 - 6" << endl;
	cout << "Tweets mentioning 'Paris' - 7" << endl;
	cout << "Tweets mentioning 'DreamWorks' - 8" << endl;
	cout << "Tweets about Japan - 9" << endl;
	cout << endl;
	cout << "Input: ";

}

int optionSelect(char count) {

	string userSearch;
	string line;
	int offset;
	ifstream tweetList;
	int tweetCount = 0;

	tweetList.open("sampleTweets.csv");

	do {

		cin >> userSearch;
		count = userSearch[0];

		if (count == '0' || count == '1' || count == '2' || count == '3' || count == '4' || count == '5' || count == '6' || count == '7' || count == '8' || count == '9'){
			cout << "Option " << count << " selected. Counting Tweets..." << endl;
		}

		cout << endl;

		if (tweetList.good()) {

			switch (count) {

			case '0':

				while (!tweetList.eof()) {
					getline(tweetList, line);
					tweetCount++;
				}

				break;

			case '1':

				offset = 0;

				while (!tweetList.eof()) {
					while (getline(tweetList, line)) {
						if ((offset = line.find("money", 0)) != string::npos || (offset = line.find("Money", 0)) != string::npos) {
							tweetCount++;
						}
					}
				}

				break;

			case '2':

				offset = 0;

				while (!tweetList.eof()) {
					while (getline(tweetList, line)) {
						if ((offset = line.find("brexit", 0)) != string::npos || (offset = line.find("Brexit", 0)) != string::npos || (offset = line.find("Trump", 0)) != string::npos || (offset = line.find("Clinton", 0)) != string::npos || (offset = line.find("parliament", 0)) != string::npos) {
							tweetCount++;
						}
					}
				}

				break;

			case '3':

				offset = 0;

				while (!tweetList.eof()) {
					while (getline(tweetList, line)) {
						if ((offset = line.find("00:00,", 0)) != string::npos) {
							tweetCount++;
						}
					}
				}

				break;

			case '4':

				offset = 0;

				while (!tweetList.eof()) {
					while (getline(tweetList, line)) {
						if ((offset = line.find("12:00,", 0)) != string::npos) {
							tweetCount++;
						}
					}
				}

				break;

			case '5':

				offset = 0;

				while (!tweetList.eof()) {
					while (getline(tweetList, line)) {
						if ((offset = line.find("uber", 0)) != string::npos || (offset = line.find("Uber", 0)) != string::npos) {
							tweetCount++;
							cout << line << endl;
						}
					}
				}

				break;

			case '6':

				offset = 0;

				while (!tweetList.eof()) {
					while (getline(tweetList, line)) {
						if ((offset = line.find("04/2016", 0)) != string::npos) {
							tweetCount++;
							cout << line << endl;
						}
					}
				}

				break;

			case '7':

				offset = 0;

				while (!tweetList.eof()) {
					while (getline(tweetList, line)) {
						if ((offset = line.find("paris", 0)) != string::npos || (offset = line.find("Paris", 0)) != string::npos) {
							tweetCount++;
							cout << line << endl;
						}
					}
				}

				break;

			case '8':

				offset = 0;

				while (!tweetList.eof()) {
					while (getline(tweetList, line)) {
						if ((offset = line.find("dreamworks", 0)) != string::npos || (offset = line.find("DreamWorks", 0)) != string::npos) {
							tweetCount++;
							cout << line << endl;
						}
					}
				}

				break;

			case '9':

				offset = 0;

				while (!tweetList.eof()) {
					while (getline(tweetList, line)) {
						if ((offset = line.find("Japan", 0)) != string::npos || (offset = line.find("Tokyo", 0)) != string::npos || (offset = line.find("Kyoto", 0)) != string::npos || (offset = line.find("Osaka", 0)) != string::npos) {
							tweetCount++;
							cout << line << endl;
						}
					}
				}

				break;

			default:
				cout << "INPUT INVALID" << endl;
				cout << "Please enter a valid input (0-9): ";
				break;

			}

		}

	} while (count != '0' && count != '1' && count != '2' && count != '3' && count != '4' && count != '5' && count != '6' && count != '7' && count != '8' && count != '9');

	return tweetCount;

}

void output() {

	int x = 0;
	x = optionSelect(0);

	cout << endl;
	cout << "Counting Complete!" << endl;
	cout << "Tweets Found: ";
	cout << x << endl;
	cout << endl;

}

void results() {

	string repeat;

	do {
		if (repeat == "G" || repeat == "g") {
			guide();
		}
		else if (repeat == "S" || repeat == "s") {
			cout << "Ready to search!" << endl;
			cout << "Input: ";
		}
		output();
		cout << "To perform another search WITH the guide, please enter 'G'." << endl;
		cout << "To perform another search WITHOUT the guide, enter 'S'." << endl;
		cout << "Or to exit the application, enter any other key." << endl;
		cout << "INPUT: ";
		cin >> repeat;
		cout << endl;
	} while (repeat == "S" || repeat == "s" || repeat == "G" || repeat == "g");

}
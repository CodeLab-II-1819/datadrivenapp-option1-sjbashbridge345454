#include <iostream>
#include <fstream>
#include <string>
#include "main.h"

using namespace std;

void startMenu() {

	cout << "GUIDE:" << endl;
	cout << endl;
	cout << "Count all Tweets in the data set - 1" << endl;
	cout << "Count Tweets mentioning 'Money' - 2" << endl;
	cout << "Count Tweets about politics - 3" << endl;
	cout << "Count and display Tweets mentioning 'Paris' - 4" << endl;
	cout << "Count and display Tweets mentioning 'DreamWorks' - 5" << endl;
	cout << "Count and display Tweets mentioning 'Uber' - 6" << endl;
	cout << "Count and display Tweets from April 2016 - 7" << endl;
	cout << "Count Tweets published at exactly midnight - 8" << endl;
	cout << "Count Tweets published at exactly midday - 9" << endl;
	cout << "Count and display Tweets about Japan - 0" << endl;
	cout << endl;
	cout << "Input: ";

}

int optionSelect(int count) {

	string line;
	int offset;
	ifstream tweetList;
	int tweetCount = 0;

	tweetList.open("sampleTweets.csv");
	cin >> count;

	cout << "Option " << count << " selected. Counting Tweets..." << endl;
	cout << endl;

	if (tweetList.good()) {

		switch (count) {

		case 1:

			while (!tweetList.eof()) {
				getline(tweetList, line);
				tweetCount++;
			}

			break;

		case 2:

			offset = 0;

			while (!tweetList.eof()) {
				while (getline(tweetList, line)) {
					if ((offset = line.find("money", 0)) != string::npos || (offset = line.find("Money", 0)) != string::npos) {
						tweetCount++;
					}
				}
			}

			break;

		case 3:

			offset = 0;

			while (!tweetList.eof()) {
				while (getline(tweetList, line)) {
					if ((offset = line.find("brexit", 0)) != string::npos || (offset = line.find("Brexit", 0)) != string::npos || (offset = line.find("Trump", 0)) != string::npos || (offset = line.find("Clinton", 0)) != string::npos || (offset = line.find("parliament", 0)) != string::npos) {
						tweetCount++;
					}
				}
			}

			break;

		case 4:

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

		case 5:

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

		case 6:

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

		case 7:

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

		case 8:

			offset = 0;

			while (!tweetList.eof()) {
				while (getline(tweetList, line)) {
					if ((offset = line.find("00:00,", 0)) != string::npos) {
						tweetCount++;
					}
				}
			}

			break;

		case 9:

			offset = 0;

			while (!tweetList.eof()) {
				while (getline(tweetList, line)) {
					if ((offset = line.find("12:00,", 0)) != string::npos) {
						tweetCount++;
					}
				}
			}

			break;

		case 0:

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
			break;

		}

	}

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
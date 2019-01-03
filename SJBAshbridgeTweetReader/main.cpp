#include <iostream>
#include <fstream>
#include <string>
#include "main.h"

using namespace std;

	int main() {

		string line;
		int count;
		int offset;
		int tweetCount = 0;
		ifstream tweetList;
		tweetList.open("sampleTweets.csv");

		startMenu();

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

		cout << endl;
		cout << "Counting Complete!" << endl;
		cout << "Tweets Found: ";
		cout << tweetCount << endl;
		cout << endl;

		system("Pause");

	}
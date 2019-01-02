#include <iostream>
#include <fstream>
#include <string>

using namespace std;

	int main() {

		string line;
		int count;
		int offset;
		int tweetCount = 0;
		ifstream tweetList;
		tweetList.open("sampleTweets.csv");

		cout << "GUIDE:" << endl;
		cout << endl;
		cout << "Count all Tweets in the data set - 1" << endl;
		cout << "Count Tweets mentioning 'Money' - 2" << endl;
		cout << "Count Tweets about politics - 3" << endl;
		cout << "Count and display Tweets mentioning 'Paris' - 4" << endl;
		cout << "Count and display Tweets mentioning 'DreamWorks' - 5" << endl;
		cout << "Count and display Tweets mentioning 'Uber' - 6" << endl;
		cout << endl;
		cout << "Input: ";

		cin >> count;

		cout << "Option " << count << " selected. Counting Tweets..." << endl;
		cout << endl;

		if (count == 1) {

			if (tweetList.good()) {

				while (!tweetList.eof()) {
					getline(tweetList, line);
					tweetCount++;
				}
			}
		}
		else if (count == 2) {

			offset = 0;

			if (tweetList.good()) {

				while (!tweetList.eof()) {
					while (getline(tweetList, line)) {
						if ((offset = line.find("money", 0)) != string::npos || (offset = line.find("Money", 0)) != string::npos) {
							tweetCount++;
						}
					}
				}
			}

		}
		else if (count == 3) {

			offset = 0;

			if (tweetList.good()) {

				while (!tweetList.eof()) {
					while (getline(tweetList, line)) {
						if ((offset = line.find("brexit", 0)) != string::npos || (offset = line.find("Brexit", 0)) != string::npos) {
							tweetCount++;
						}
					}
				}
			}

		}
		else if (count == 4) {

			offset = 0;

			if (tweetList.good()) {

				while (!tweetList.eof()) {
					while (getline(tweetList, line)) {
						if ((offset = line.find("paris", 0)) != string::npos || (offset = line.find("Paris", 0)) != string::npos) {
							tweetCount++;
							cout << line << endl;
						}
					}
				}

			}

		}
		else if (count == 5) {

			offset = 0;

			if (tweetList.good()) {

				while (!tweetList.eof()) {
					while (getline(tweetList, line)) {
						if ((offset = line.find("dreamworks", 0)) != string::npos || (offset = line.find("DreamWorks", 0)) != string::npos) {
							tweetCount++;
							cout << line << endl;
						}
					}
				}

			}

		}
		else if (count == 6) {

			offset = 0;

			if (tweetList.good()) {

				while (!tweetList.eof()) {
					while (getline(tweetList, line)) {
						if ((offset = line.find("uber", 0)) != string::npos || (offset = line.find("Uber", 0)) != string::npos) {
							tweetCount++;
							cout << line << endl;
						}
					}
				}

			}

		}

		cout << endl;
		cout << "Counting Complete!" << endl;
		cout << "Tweets Found: ";
		cout << tweetCount << endl;
		cout << endl;

		system("Pause");

	}
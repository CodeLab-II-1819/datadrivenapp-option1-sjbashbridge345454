#include "ofMain.h"
#include "ofApp.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

	string line;
	int count;
	int tweetCount = 0;
	ifstream tweetList;
	tweetList.open("sampleTweets.csv");

	cout << "GUIDE:" << endl;
	cout << endl;
	cout << "Count all Tweets in the data set - 1" << endl;
	cout << "Count Tweets mentioning the word 'Money' - 2" << endl;
	cout << endl;
	cout << "Input: ";

	cin >> count;

	if (count == 1) {

		cout << "Option 1 selected. Counting Tweets..." << endl;

		if (tweetList.good()) {

			while (!tweetList.eof()) {
				getline(tweetList, line);
				tweetCount++;
			}
		}
	}
	else if (count == 2) {

		int offset = 0;
		cout << "Option 2 selected. Counting Tweets..." << endl;

		if (tweetList.good()) {

			while (!tweetList.eof()) {
				while (getline(tweetList, line)) {
					if ((offset = line.find("money", 0)) != string::npos) {
						tweetCount++;
					}
					else if ((offset = line.find("Money", 0)) != string::npos) {
						tweetCount++;
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



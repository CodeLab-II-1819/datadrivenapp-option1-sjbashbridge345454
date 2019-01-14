#include <iostream>
#include <fstream>
#include <string>
#include "main.h"

using namespace std;

void guide() {

	string options[] = {"To Count:","","All Tweets in the data set - 0","Tweets mentioning 'Money' - 1","Tweets about politics - 2","Tweets published at exactly midnight - 3","Tweets published at exactly midday - 4",
	"","To Count AND Display:","","Tweets mentioning 'Uber' - 5","Tweets from April 2016 - 6","Tweets mentioning 'Paris' - 7","Tweets mentioning 'DreamWorks' - 8","Tweets about Japan - 9","" };

	for (int i = 0; i < 16; i++) {
		
		cout << options[i] << endl;

	}

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
					tweetCount--;
					

					break;
					while (!tweetList.eof()) {
				case '1':

					offset = 0;

				
						while (getline(tweetList, line)) {
							if ((offset = line.find("money", 0)) != string::npos || (offset = line.find("Money", 0)) != string::npos) {
								tweetCount++;
							
						}
					}

					break;

				case '2':

					offset = 0;

				
						while (getline(tweetList, line)) {
							if ((offset = line.find("brexit", 0)) != string::npos || (offset = line.find("Brexit", 0)) != string::npos || (offset = line.find("Trump", 0)) != string::npos ||
								(offset = line.find("Clinton", 0)) != string::npos || (offset = line.find("Bernie", 0)) != string::npos || (offset = line.find("president", 0)) != string::npos ||
								(offset = line.find("President", 0)) != string::npos || (offset = line.find("parliament", 0)) != string::npos ||
								(offset = line.find("Prime Minister", 0)) != string::npos || (offset = line.find("prime minister", 0)) != string::npos ||
								(offset = line.find("Government", 0)) != string::npos || (offset = line.find("government", 0)) != string::npos) {
								tweetCount++;
							
						}
					}

					break;

				case '3':

					offset = 0;

				
						while (getline(tweetList, line)) {
							if ((offset = line.find("00:00,", 0)) != string::npos) {
								tweetCount++;
							
						}
					}

					break;

				case '4':

					offset = 0;

					
						while (getline(tweetList, line)) {
							if ((offset = line.find("12:00,", 0)) != string::npos) {
								tweetCount++;
							}
					}

					break;

				case '5':

					offset = 0;

					
						while (getline(tweetList, line)) {
							if ((offset = line.find("Uber", 0)) != string::npos) {
								tweetCount++;
								cout << line << endl;
						
						}
					}

					break;

				case '6':

					offset = 0;

				
						while (getline(tweetList, line)) {
							if ((offset = line.find("04/2016", 0)) != string::npos) {
								tweetCount++;
								cout << line << endl;
							
						}
					}

					break;

				case '7':

					offset = 0;

					
						while (getline(tweetList, line)) {
							if ((offset = line.find("paris", 0)) != string::npos || (offset = line.find("Paris", 0)) != string::npos) {
								tweetCount++;
								cout << line << endl;
						
						}
					}

					break;

				case '8':

					offset = 0;

				
						while (getline(tweetList, line)) {
							if ((offset = line.find("dreamworks", 0)) != string::npos || (offset = line.find("DreamWorks", 0)) != string::npos) {
								tweetCount++;
								cout << line << endl;
	
						}
					}

					break;

				case '9':

					offset = 0;


						while (getline(tweetList, line)) {
							if ((offset = line.find("Japan", 0)) != string::npos || (offset = line.find("Tokyo", 0)) != string::npos || (offset = line.find("Kyoto", 0)) != string::npos || (offset = line.find("Osaka", 0)) != string::npos) {
								tweetCount++;
								cout << line << endl;
							
						}
					}

					break;

				default:
					cout << "INPUT INVALID" << endl;
					cout << "Please enter a valid input (0-9): ";
					break;

				}
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
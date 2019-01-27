#include <iostream>
#include <fstream>
#include <string>
#include "main.h"

using namespace std;

void guide() {

	//Options are stored within an array
	string options[] = {"To Count:","","All Tweets in the data set - 0","Tweets mentioning 'Money' - 1","Tweets about politics - 2","Tweets published at exactly midnight - 3","Tweets published at exactly midday - 4",
	"","To Count AND Display:","","Tweets mentioning 'Uber' - 5","Tweets from April 2016 - 6","Tweets mentioning 'Paris' - 7","Tweets mentioning 'DreamWorks' - 8","Tweets about Japan - 9","" };

	//This array is then displayed to the screen by the following 'for' loop
	for (int i = 0; i < 16; i++) {
		
		cout << options[i] << endl;

	}

	//Prompts the user to input a character
	cout << "Input: ";

}

int optionSelect(char count) {

	//Declares a number of variables used by this function
	string userSearch;
	string line;	
	ifstream tweetList;
	int offset;
	int tweetCount = 0;

	//Opens the sampleTweets file
	tweetList.open("sampleTweets.csv");

	do {

		//Allows user to enter string but only reads first character
		cin >> userSearch;
		count = userSearch[0];

		//If output is valid, user is notified of the option they selected
		if (count == '0' || count == '1' || count == '2' || count == '3' || count == '4' || count == '5' || count == '6' || count == '7' || count == '8' || count == '9'){
			cout << "Option " << count << " selected. Counting Tweets..." << endl;
		}

		cout << endl;

		if (tweetList.good()) {
			//Switch statement contains cases for all ten options, plus a default error message
				switch (count) {

				case '0':

					//Reads each line in the sampleTweets file and increments the tweetCount each time
					while (!tweetList.eof()) {
						getline(tweetList, line);
						tweetCount++;
					}

					//Removes one from tweetCount (to account for file header)
					tweetCount--;

					break;

					while (!tweetList.eof()) {
				case '1':

					//Sets/Resets 'offset' to 0
					offset = 0;

						//Searches for the words 'money' and 'Money' in the sampleTweets file, and increments the tweetCount each time an instance is found
						while (getline(tweetList, line)) {
							if ((offset = line.find("money", 0)) != string::npos || (offset = line.find("Money", 0)) != string::npos) {
								tweetCount++;
							
						}
					}

					break;

				case '2':

					//Sets/Resets 'offset' to 0
					offset = 0;

						//Searches for any of 12 words related to politics in the sampleTweets file, incrementing tweetCount with each instance found
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

					//Sets/Resets 'offset' to 0
					offset = 0;

						//Searches for lines containing '00:00,' in the sampleTweets file, incrementing tweetCount each time an instance is found
						while (getline(tweetList, line)) {
							if ((offset = line.find("00:00,", 0)) != string::npos) {
								tweetCount++;
							
						}
					}

					break;

				case '4':

					//Sets/Resets 'offset' to 0
					offset = 0;

						//Searches for lines containing '00:00,' in the sampleTweets file, incrementing tweetCount each time an instance is found
						while (getline(tweetList, line)) {
							if ((offset = line.find("12:00,", 0)) != string::npos) {
								tweetCount++;
							}
					}

					break;

				case '5':

					//Sets/Resets 'offset' to 0
					offset = 0;

						/*Searches for the word 'Uber' in each line of the sampleTweets file. Each time an instance is found,
						tweetCount is incremented AND the line is displayed to the console*/
						while (getline(tweetList, line)) {
							if ((offset = line.find("Uber", 0)) != string::npos) {
								tweetCount++;
								cout << line << endl;
						
						}
					}

					break;

				case '6':

					//Sets/Resets 'offset' to 0
					offset = 0;

						/*Searches for the string '04/2016' in the sampleTweets file. Each time a line is found containing the string,
						tweetCount is incremented AND the line is displayed to the console*/
						while (getline(tweetList, line)) {
							if ((offset = line.find("04/2016", 0)) != string::npos) {
								tweetCount++;
								cout << line << endl;
							
						}
					}

					break;

				case '7':

					//Sets/Resets 'offset' to 0
					offset = 0;

						/*Searches for the words 'paris' and 'Paris' in the sampleTweets file, incrementing tweetCount
						AND displaying the line to the console each time an instance is found*/
						while (getline(tweetList, line)) {
							if ((offset = line.find("paris", 0)) != string::npos || (offset = line.find("Paris", 0)) != string::npos) {
								tweetCount++;
								cout << line << endl;
						
						}
					}

					break;

				case '8':

					//Sets/Resets 'offset' to 0
					offset = 0;

						/*Searches for the words 'dreamworks' and 'DreamWorks' in the sampleTweets file, incrementing tweetCount
						AND displaying the line to the console each time an instance is found*/
						while (getline(tweetList, line)) {
							if ((offset = line.find("dreamworks", 0)) != string::npos || (offset = line.find("DreamWorks", 0)) != string::npos) {
								tweetCount++;
								cout << line << endl;
	
						}
					}

					break;

				case '9':

					//Sets/Resets 'offset' to 0
					offset = 0;

						/*Searches for any of four Japan-related words in each line of the sampleTweets file. Each time an instance is found,
						the string is displayed to the console and tweetCount is incremented*/
						while (getline(tweetList, line)) {
							if ((offset = line.find("Japan", 0)) != string::npos || (offset = line.find("Tokyo", 0)) != string::npos || (offset = line.find("Kyoto", 0)) != string::npos || (offset = line.find("Osaka", 0)) != string::npos) {
								tweetCount++;
								cout << line << endl;
							
						}
					}

					break;

				default:

					//Outputs error message if user enters an invalid character (A-Z, punctuation marks etc.)
					cout << "INPUT INVALID" << endl;
					cout << "Please enter a valid input (0-9): ";
					break;

				}
			}
		}

	} while (count != '0' && count != '1' && count != '2' && count != '3' && count != '4' && count != '5' && count != '6' && count != '7' && count != '8' && count != '9');

	//Returns the final value of tweetCount. This is then accessed by the function 'output'.
	return tweetCount;

}

void output() {

	//Initialises a variable with the value of 'tweetCount', returned by 'optionSelect'
	int x = 0;
	x = optionSelect(0);

	//Outputs message to inform user that counting is completed
	cout << endl;
	cout << "Counting Complete!" << endl;
	cout << "Tweets Found: ";

	//Displays total Tweets found
	cout << x << endl;
	cout << endl;

}

void results() {

	//Declares string 'repeat'
	string repeat;

	//Using a 'do-while' loop ensures the following code will always be executed at least once.
	do {
		//If the value of 'repeat' is 'G' or 'g', 'guide' will be called, displaying the options list again
		if (repeat == "G" || repeat == "g") {
			guide();
		}
		//If the value of 'repeat' is 'S' or 's', user is prompted to search again WITHOUT seeing options
		else if (repeat == "S" || repeat == "s") {
			cout << "Ready to search!" << endl;
			cout << "Input: ";
		}
		//Calls 'output', allowing the user to perform another search
		output();
		//Explains to user the options available to them
		cout << "To perform another search WITH the guide, please enter 'G'." << endl;
		cout << "To perform another search WITHOUT the guide, enter 'S'." << endl;
		cout << "Or to exit the application, enter any other key." << endl;
		cout << "INPUT: ";
		//Allows user to enter the value of 'repeat'
		cin >> repeat;
		cout << endl;
		//Once 'repeat' is no longer equal to any of the four acceptable values below, 'results' will finish executing
	} while (repeat == "S" || repeat == "s" || repeat == "G" || repeat == "g");

}
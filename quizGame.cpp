#include <iostream>
#include <string>
using namespace std;
 
 
void runGame(string questions[], string answers[], int level); //this function runs the game, taking the questions and answers information and sets the level based on user input
int inputCheck(string menu , int limit);//this function validates int input, presenting a user with a menu and uses the limit parameter to set the input validation range
string modifyQuestion(string q, int mod);//this function modifies the question in the quiz based on the difficulty
 
 
int main() {
 
 
	string qs[2][4] = { 
		{"England", "Wales", "France", "Germany"},//row for europe questions
		{"Brazil", "Peru", "Argentina", "Columbia"}//row for south america questions
	}; //2D array to store question country
	string ans[2][4] = { 
		{"London", "Cardiff" , "Paris", "Berlin"},//row for europe answers
		{"Brasila", "Lima", "Buenos Aires", "Bogota"}//row for south america answers
	}; //2D array to store answer city
	
	char replay;//variable to check if user wants to continue
	do {//do while loop to run the game
 
 
		/*run input check and assign returned value to choice variable. Function takes the 
		menu string to display to user and number of options in menu for vaildation purposes*/
		int choice = inputCheck("1: European Cities\n2: South American Cities", 2);
 
 
		/*run input check and assign returned value to difficulty variable. Function takes the
	    menu string to display to user and number of options in menu for vaildation purposes*/
		int difficulty = inputCheck("1: Easy\n2: Medium\n3: Hard", 3);
 
 
		switch (choice) {//check which continent user wishes to play
		case 1:
			runGame(qs[0], ans[0], difficulty);//pass first row of arrays to run game function and set level based on user input
			break;
		case 2:
			runGame(qs[1], ans[1], difficulty);//pass second row of arrays to run game function and set level based on user input
			break;
		}
		cout << "Play again? Enter (Y) to play again or any other input to quit." << endl;//check if user wants to play again
		cin >> replay;//get input into replay variable
		replay = toupper(replay);//convert input to uppercase
	} while (replay == 'Y');//check if replay is Y, if so run the game again
	
 
 
 
 
	return 0;
}
 
 
int inputCheck(string menu, int limit) {
	cout << menu << endl;//display menu string to user
	int num; //variable to store user input
	cin >> num;//get input
	while (cin.fail() || num < 1 || num > limit) {//check input, if a letter or out of range number is entered run loop
		cout << "Invalid Input" << endl;//tell user input is not vaild
		cout << menu << endl;//display menu again
		cin.clear();//clear error flag
		cin.ignore(1000, '\n');//ignore the enter key that will still be in input stream
		cin >> num;//get number input again
	}
	return num;//return inputted number back to main program once its validated
 
 
}
 
 
string modifyQuestion(string q, int mod) {//function takes string and uses mod varible to determine how many letters to blank out
	for (int i = 0; i < q.length(); i++) {//for loop runs through string, using string length function to determine how long string is
		if (i % mod == 0) {//if the i counter variable is divisible by the mod value
			q[i] = '*';//change current letter in string to asterix
		}
	}
	return q;//return modified string
}
 
 
void runGame(string questions[], string answers[], int level) {//function takes rows from 2d array in main two 1d array parameters, and also the difficulty level
	cin.ignore(1000, '\n');
	int lives = 3; //store the number of lives the player has
	string answer; //declare variable for user input
	int count = 0; //variable to keep track of question/answer
	int score = 0; //variable to keep track of user score
 
 
	while (lives > 0 && count < 4) { //while loop will keep running as long as lives are more than 0 and count less than 4
		
		string question = questions[count]; //get current question from array and assign to question string
		if (level == 2) {//if level is on medium
			question = modifyQuestion(question, 6); //return modified string and assign to question variable. Every 6th character will be an asterix
		}
		else if (level == 3) {//if level is on hard
			question = modifyQuestion(question, 2); //return modified string and assign to question variable. Every 2nd character will be an asterix
		}
 
 
		cout << "What is the capital of " << question << endl; //ask user a question by accessing the question array
		getline(cin, answer); //Get the users answer from cin and assign to answer variable - getline allows us to get cities with spaces in the name (e.g. Mexico City)
		answer[0] = toupper(answer[0]); //convert first letter of user answer to upper case
		if (answer == answers[count]) { //checking users answer against value in answers array
			cout << "Correct" << endl; //inform them they were right
			count++; //increment count so user gets next question
			score++; //increment score
		}
		else {//if guessed wrong
			lives--; //decrement lives
			cout << "You got it wrong, try again. You have " << lives << " lives remaining" << endl; //inform the user they were wrong
		}
	}
 
 
	if (lives == 0 && score == 0) { //if user lost all lives and didn't get one right
		cout << "Haha you suck" << endl;
	}
	else { //user got at least 1 question correct
		cout << "You got " << score << " correct and had " << lives << " lives remaining" << endl;
	}
}
//Created by: Brandon Weider
//Created on: 10/11/13

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <list>
#include <math.h>
using namespace std;

//variables
char yesNo;  //play again
int randomNum;
int playerGuess;
int firstPlay = 0;
int diceRoll1 = (rand() % 6) + 1;
int diceRoll2 = (rand() % 6) + 1;
int diceRoll3 = (rand() % 6) + 1;
int diceRoll4 = (rand() % 6) + 1;

//declare functions
int playMastermind(); //function plays full game
int rollDie(); //determines random number with digits 1-6
void evaluateGuess(); //compares player guess to randomNum
int nthDigitRandom();
int nthDigitGuess();
int clearNthDigit();
int getRandomNum();

//callable functions
int playMastermind(int number){
	int i;
	char playAgain;
	int playerGuess;
	for (i = 1; i <= 12; i++){
		cout << "Try to guess the number combination (no zero digits): ";
		cin >> playerGuess;
		evaluateGuess(number, playerGuess);
	}
	cout << "Sorry the number was " << number << ". You lose." << endl;
	cout << "Would you like to play again? (y/n)";
	cin >> playAgain;

	if (playAgain == 'y' || playAgain == 'Y'){
		int main();
	}
	else{
		cout << "Thank you for playing Mastermind." << endl;
		return 0;
	}

	return 0;
}

int rollDie(int a, int b, int c, int d){
	int numTotal;
	numTotal = ((a * 1000) + (b * 100) + (c * 10) + (d));

	return numTotal;
}




void evaluateGuess(int answer, int guess){
	int a;
	int b;
	a = answer - 1;
	b= guess - 1;

	nthDigitRandom();
	nthDigitGuess();

}

int nthDigitRandom(int number){
	int n; //digit position
	int tmp1;
	int tmp2;
	int randomDigit1;
	int randomDigit2;
	int randomDigit3;
	int randomDigit4;
	n = 1;
	while(n == 1){
		tmp1 = (int)(number / 10^n);
		tmp2 = ((int)(tmp1 / 10))*10;
		randomDigit1 = tmp1 - tmp2;
		cout << randomDigit1;
		n += 1;
	}
	while(n == 2){
		tmp1 = (int)(number / 10^n);
		tmp2 = ((int)(tmp1 / 10))*10;
		randomDigit2 = tmp1 - tmp2;
		n += 1;
	}
	while(n == 3){
		tmp1 = (int)(number / 10^n);
		tmp2 = ((int)(tmp1 / 10))*10;
		randomDigit3 = tmp1 - tmp2;
		n += 1;
	}
	while(n == 4){
		tmp1 = (int)(number / 10^n);
		tmp2 = ((int)(tmp1 / 10))*10;
		randomDigit4 = tmp1 - tmp2;
		n += 1;
	}

	return 0;
}

int nthDigitGuess(int number){
	int n; //digit position
	int tmp1;
	int tmp2;
	int guessDigit1;
	int guessDigit2;
	int guessDigit3;
	int guessDigit4;
	n = 1;
	while(n == 1){
		tmp1 = (int)(number / 10^n);
		tmp2 = ((int)(tmp1 / 10))*10;
		guessDigit1 = tmp1 - tmp2;
		n += 1;
	}
	while(n == 2){
		tmp1 = (int)(number / 10^n);
		tmp2 = ((int)(tmp1 / 10))*10;
		guessDigit2 = tmp1 - tmp2;
		n += 1;
	}
	while(n == 3){
		tmp1 = (int)(number / 10^n);
		tmp2 = ((int)(tmp1 / 10))*10;
		guessDigit3 = tmp1 - tmp2;
		n += 1;
	}
	while(n == 4){
		tmp1 = (int)(number / 10^n);
		tmp2 = ((int)(tmp1 / 10))*10;
		guessDigit4 = tmp1 - tmp2;
		n += 1;
	}
	return 0;
}

//int clearNthDigit(){
//}


int main(){
	if (firstPlay == 0){
		cout << "Welcome to the game Mastermind! This game " << endl;
		cout << "is a guessing game. A 4-digit number will " << endl;
		cout << "be chosen at random. You then have 12 tries " << endl;
		cout << "to guess the number correctly. After each " << endl;
		cout << "guess you will be told how many white and or " << endl;
		cout << "black pegs you recieved. Black means you " << endl;
		cout << "have a correct number in the correct spot " << endl;
		cout << "and white means you have a correct number in " << endl;
		cout << "in the wrong spot. Let's play Mastermind!" << endl;
	}

	//calls the rollDie function and assigns variables
	int roll_1, roll_2, roll_3, roll_4;
	roll_1 = (rand() % 6) + 1;
	roll_2 = (rand() % 6) + 1;
	roll_3 = (rand() % 6) + 1;
	roll_4 = (rand() % 6) + 1;
	randomNum = rollDie(roll_1, roll_2, roll_3, roll_4);
	firstPlay += 1;

	playMastermind(randomNum);
	
	return 0;
}


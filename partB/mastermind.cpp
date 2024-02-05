// include necessary header file
#include "mastermind.h"
#include <iostream>
#include <vector>

using namespace std;

// the constructor that takes in n and m from user
mastermind::mastermind(int length, int range): n(length), m(range), x(n,m)
{
	cout << "n: " << n << ", m: " << m << endl;
}

// the constructor that has default values for n and m
mastermind::mastermind() : n(5), m(10), x(n,m) {}

// full function definition for the printCode function
 void mastermind::printCode() const
 {
    vector<int> codeGuess = x.getSecretCode();

    // print the code to the screen
    cout << "The secret code is " << endl;

    for (int z = 0; z < n; z++)
	{
		// print digits of secret code separated by spaces
        cout << codeGuess[z] << " " ;
    }

    // end the line 
    cout << endl;

 }

 // full function definition for the humanGuess function
 vector<int> mastermind::humanGuess()
 {
    vector<int> temporaryHumanCodeGuess;

    // initialize the human guess 
    x.initializeHumanCode();

    temporaryHumanCodeGuess = x.getHumanCode();
    return temporaryHumanCodeGuess;

 }

 // full function definition for the getResponse function
 Response mastermind::getResponse()
 {
   // make a response object
   Response y;

   // set the correct and incorrect responses
   y.setCorrectDigits(x);
   y.setIncorrectDigits(x);

   return y;

 }

 // full function defintion for the isSolved function
 bool mastermind::isSolved(Response y)
 { 
    int totalCorrect = y.getCorrectDigits();
	if (totalCorrect == n)
	{
		return true;
	}
	else
		return false;
 }

 // full function definition for the playGame function
 void mastermind::playGame()
 {
	// randomly initialize the secret code and print it to the screen
	x.randomlyInitialize();
	printCode();

	// initialize the number of user attempts to 0
	int attempts = 0;

	// create a Response object, y
	Response y;

	// while the user has used less than 10 attempts, do the following
	while (attempts < 10)
	{
		// get the guess from the user
		x.initializeHumanCode();

		y = getResponse();
		cout << y;

		// increase the number of attempts by 1
		attempts++;

        // if the user guess matches the secret code, the user has won
		if (isSolved(y) == true)
		{
			cout << "Congratulations! You win!" << endl;
			
			// the game is over, break out of the loop
			break;
		}

      // if the user has used all ten guesses and still not guessed the code, they have lost
		if (attempts == 10)
		{
			cout << "Sorry, you lose. ";
			printCode();

			// the game is over, break out of the loop
			break;
		}
	}
}
 
// include necessary header file
#include "mastermind.h"

// the constructor 
mastermind::mastermind() {}

// full function definition for the printCode function
 void mastermind::printCode() const
 {
    vector<int> tempCode = x.getSecretCode();

    // print the code to the screen
    cout << "The secret code is " << endl;

    for (int z = 0; z < 4, z++)
	{
        cout << tempCode[z] << "," ;
    }

    // end the line 
    cout << endl;

 }

 // full function definition for the humanGuess function
 vector<int> mastermind::humanGuess()
 {
    vector<int> tempHumanCodeGuess;

    // initialize the human guess 
    x.getHumanCode();
    tempHumanCodeGuess = x.getHumanCode;
    return tempHumanCodeGuess;

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
	if (totalCorrect == 4)
	{
		return true;
	}
	else
		return false;
 }

 // full function definition for the playGame function
 void mastermind::playGame()
 {
	// initialize the number of user attempts to 0
	int attempts = 0;

	// create a Response object, y
	Response y;

	x.randomlyInitialize();
	printCode();

	// while the guess has not been solved and the user has used less than 10 attempts, do the following
	while (isSolved(y) == false || attempts < 10)
	{
		x.initializeHumanCode();
		y = getResponse();
		isSolved(y);
		y.printResponse();

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
			cout << "Sorry, you lose. The Secret Code was: ";
			for(int digit: secretCode)
			{
        		cout << digit << " ";
			}

			// the game is over, break out of the loop
			break;
		}
	}
}
 
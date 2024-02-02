// include necessary header file
#include "mastermind.h"

// the constructor 
mastermind::mastermind() {}

// full function definition for the printCode function
 void mastermind::printCode() const
 {
    vector<int> tempCode = x.getCode();

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
 response mastermind::getRepsonse()
 {
   // make a response object
   response y;

   // set the correct and incorrect responses
   y.incorrectResponse(x);
   y.correctResponse(x);

   return y;

 }

 // full function defintion for the isSolved function
 bool mastermind::isSolved(response y)
 {

 }

 // full function definition for the playGame function
 void mastermind::playGame()
 {
   response y;
	x.initializeSecretCode();
	printCode();
	int gameCounter = 0;
	while (isSolved(y) == false || gameCounter < 10)
	{
		x.initializeHumanCode();
		y = getResponse();
		isSolved(y);
		y.printResponse();
		gameCounter++;
		if (isSolved(y) == true)
		{
			cout << "You win" << endl;
			system("pause");
			break;
		}
		if (gameCounter == 10)
		{
			cout << "You lose" << endl;
			system("pause");
			break;
		}
	}
}
 
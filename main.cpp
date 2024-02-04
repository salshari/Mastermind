// include all necessary header and source files 
#include "mastermind.h"

#include <iostream>

using namespace std;

int main () 
{
    // seed time to random number generator
    srand(time(0));

    int n;
    int m;

    // main function from part a 
    /*
    Code secretCode(5,7);
    secretCode.randomlyInitialize();

    cout << "\nSecret Code: ";
    for (int i = 0; i < n; i++)
    {
        cout << secretCode.getSecretCode()[i] << " ";
    }
    cout<<endl;

    //const vector<int>& secret = secretCode.getSecretCode();

    vector<int> guess1 = {5,0,3,2,6};
    vector<int> guess2 = {2,1,2,2,2};
    vector<int> guess3 = {1,3,3,4,5};

    cout<< "Guess: ";
    for (int digit:guess1) 
    {
        cout << digit << " ";
    }
    cout << "\nCorrect Digits (Correct Location): " << secretCode.checkCorrect(guess1) << "\nCorrect Digits (Incorrect Location): " << secretCode.checkIncorrect(guess1) << "\n\n";

    cout<< "Guess: ";
    for (int digit:guess2) 
    {
        cout << digit << " ";
    }
    cout << "\nCorrect Digits (Correct Location): " << secretCode.checkCorrect(guess2) << "\nCorrect Digits (Incorrect Location): " << secretCode.checkIncorrect(guess2) << "\n\n";

    cout<< "Guess: ";
    for (int digit:guess3) 
    {
        cout << digit << " ";
    }
    cout << "\nCorrect Digits (Correct Location): " << secretCode.checkCorrect(guess3) << "\nCorrect Digits (Incorrect Location): "<< secretCode.checkIncorrect(guess3) << "\n\n";
    */

    // main function for part b

    // take in n and m values from user
    cout << "Please give the length you want the code to be: ";
    cin >> n;
    cout << endl;
    cout << "Please give the range (just one integer as the code will have numbers from 0 - your given range): ";
    cin >> m;
    cout << endl;

    // make a mastermind object
    mastermind game(n,m);
    game.playGame();

}

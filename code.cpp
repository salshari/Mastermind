#include "code.h"
#include <stdexcept>
#include <ctime>

// default constructor
Code::Code() {}

Code::Code(int length, int range) : n(length), m(range) {}

// full function definition for the getSecretCode function
vector<int> Code::getSecretCode() const 
{
    return secretCode;
}

// full function definition for the getHumanCode function
vector<int> Code::getHumanCode() const
{
    return guess;   
}

// full function definition for the randomlyInitialize function
void Code::randomlyInitialize()
{
    // clear any previously saved secretCode
    secretCode.clear();

    for (int i = 0; i <= n; i++)
    {
        secretCode.push_back(rand()%m);
    }
}

// full function defintion for the checkCorrect function
int Code::checkCorrect()
{
    // initialize the number of correctDigits to 0
    int correctDigits = 0;

    for (int i = 0; i < n; i++)
    {
        if (guess[i] == secretCode[i])
        {
            correctDigits += 1;
        }
    }

    return correctDigits;
}

// full function definiton for the checkIncorrect function
int Code::checkIncorrect()
{
    //creating incorrectdigits initalized to 0
    int incorrectDigits = 0;

    // vector created to keep track of digits from secret code been used in a match already
    vector<bool> usedFromSecret(n, false);

    // nested for loops first one runs for entire guess vector
    for (int i = 0; i < n; i++) {
        //runs through each digit in guess and compares to each number in secret code
        for (int j = 0; j < n; j++) {
            //in the code but in the wrong position
            if (!usedFromSecret[j] && guess[i] == secretCode[j]) {
                // Check if the digits are in the correct position, if not add 1 to incorrect digits
                if (i != j) 
                {
                    incorrectDigits += 1;
                }

                //marks digit as used
                usedFromSecret[j] = true;

                break;
            }
        }
    }

    return incorrectDigits;
};

// full function definition for the initializeHumanCode function
void Code::initializeHumanCode(){
    // clear previous guess
    guess.clear();

    cout << "Enter your guess (separate each digit with a space):" <<endl;
    for (int i = 0; i < n; i++){
        int digit;
        cin >> digit;
        guess.push_back(digit);
    }
}
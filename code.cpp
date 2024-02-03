#include "code.h"

// default constructor
// Code::Code() {}

Code::Code(int length, int range): n(length), m(range) {}

// full function definition for the randomlyInitialize function
void Code::randomlyInitialize()
{
    // clear any previously saved secretCode
    secretCode.clear();

    for (int i = 0; i < n; i++)
    {
        secretCode.push_back(rand()%m);
    }
}

// full function defintion for the checkCorrect function
int Code::checkCorrect(const vector<int>& guess)
{
    // initialize the number of correctDigits to 0
    int correctDigits = 0;

    // if the guess is not the correct length, the user has given an invalid argument
    if (guess.size() != n)
    {
        throw invalid_argument("Invalid guess length");
    }
        
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
int Code::checkIncorrect(const vector<int>&guess)
{
    int incorrectDigits = 0;

    if (guess.size() != n)
    {
        throw invalid_argument("Invalid guess length");
    }
        
    vector<bool> secretUsed(n,false);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(!secretUsed[j] && guess[i] == secretCode[j])
            {
                incorrectDigits += 1;
                secretUsed[j] = true;
                break;
            }
        }
    }
    return incorrectDigits;
}

//initializes a vector to store human code
vector<int> Code::initializeHumanCode()const{
    vector<int> guess (n, 0);
    cout<<"Enter your guess (separate each digit with a space)"<<endl;
    for(int i = 0; i < n; i++)
    {
        cin >> guess[i];
    }
        return guess;
    }

vector<int> Code::getSecretCode() const 
{
    return secretCode;
}

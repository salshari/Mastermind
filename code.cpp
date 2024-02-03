#include "code.h"

class Code{
private:
    int n;
    int m;
    vector<int> secretCode;
public:

    // default constructor
    Code (){}

    Code(int length, int range): n(length), m(range) {}

    // full function definition for the randomlyInitialize function
    void randomlyInitialize(){

        // clear any previously saved secretCode
        secretCode.clear();

        for (int i = 0; i < n; i++)
        {
            secretCode.push_back(rand()%m);
        }
    }

    // full function defintion for the checkCorrect function
    int checkCorrect(const vector<int>& guess)
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
    int checkIncorrect(const vector<int>&guess)
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
    const vector<int>&getSecretCode() const {
        return secretCode;
    }

};
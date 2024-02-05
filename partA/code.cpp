#include <iostream>
#include <vector>
#include <stdexcept>
#include <ctime>
#include "code.h"

using namespace std;

Code::Code() {}

Code::Code(int length, int range) : n(length), m(range) {}


//Creates secret code that is n in length and uses numbers ranging from 1-(m-1)
void Code::randomlyInitialize()
{
    secretCode.clear();
    for (int i=0;i<n;i++)
    {
        secretCode.push_back(rand()%m);

    }
}

//initializes a vector to store human code
vector<int> Code::initializeHumanCode() const
{
        vector<int> guess (n,0);
        cout<<"Enter your guess (separate each digit with a space"<<endl;

        for(int i=0;i<n;i++)
        {
            cin>>guess[i];
        }
        return guess;
}

int Code::checkCorrect(const vector<int>& guess)
{
    int correctDigits = 0;
    for (int i=0; i<n; i++){
        if (guess[i]==secretCode[i]){
            correctDigits +=1;
        }
    }
    return correctDigits;
}

const vector<int>& Code::getSecretCode() const 
{
    return secretCode;
}

int Code::checkIncorrect(const vector<int>& guess) 
{
    //creating incorrectdigits initalized to 0
    int incorrectDigits = 0;
    //vector created to keep track of digits from secret code been used in a match already
    vector<bool> usedFromSecret(n, false);
    //nested for loops first one runs for entire guess vector
    for (int i = 0; i < n; i++) 
    {
        //runs through each digit in guess and compares to each number in secret code
        for (int j = 0; j < n; j++) {
            //in the code but in the wrong position
            if (!usedFromSecret[j] && guess[i] == secretCode[j]) 
            {
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
}

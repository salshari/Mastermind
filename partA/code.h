#pragma once
#include <iostream>
#include <vector>
#ifndef CODE_H
#define CODE_H

using namespace std;

class Code
{
    private:

    // length of code sequence
    int n;

    // range of code sequence is [0,m-1]
    int m;

    vector<int> secretCode;

    public:

    vector<int> getHumanCode() const;
    
    const vector<int>&getSecretCode() const;

    vector<int> guess;

    vector<int> initializeHumanCode() const;

    // default constructor
    Code ();

    // constructor 
    Code(int length, int range);

    // function to initialize the code randomly
    void randomlyInitialize();

    /*
    function with guess as a parameter (another code object) that returns the 
    number of correct digits in the correct location 
    */
    int checkCorrect(const vector<int>& guess);

    /*
    function with guess as a parameter (another code object) that returns the 
    number of correct digits in the incorrect location.
    No digit in the guess or the code is counted more than once
    */
    int checkIncorrect(const vector<int>& guess);

};

#endif
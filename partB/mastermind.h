#pragma once
#include "response.h"
#ifndef MASTERMIND_H
#define MASTERMIND_H


using namespace std;

class mastermind{
    private:

    int n;
    int m;
    
    public:
       
    // code object as data member 
    Code x;

    // default constructor
    mastermind();

    // constructor
    mastermind(int length, int range);

    // function to print code
    void printCode() const;

    // function that reads guess from keyboard and returns a code object that represents the guess
    vector<int> humanGuess();

    // function that is passed one code (a guess code), and returns a response
    Response getResponse();

    // function that is passed a response and returns True if the resposne indicates that the board has been solved
    bool isSolved(Response y);

    /*
    function that initializes a random code, prints it to the screen, and then iteratively gets a guess from the 
    user and prints the response until either the codemaker (computer) or the codebreaker has won
    */
    void playGame();
};

#endif
#pragma once
#include "code.h"
#include <iostream>
#ifndef RESPONSE_H
#define RESPONSE_H


using namespace std;

class Response
{
    private:

    int correctDigits;
    int incorrectDigits;

    public:

    // default constructor
    Response();
        
    Response(int correct, int incorrect);

    // function that gets correct digits in correct location
    int getCorrectDigits() const ;

    // function that gets correct digits in incorrect location
    int getIncorrectDigits() const;

    // function that sets correct digits in correct location
    void setCorrectDigits(Code x);

    // function that sets correct digits in incorrect location
    void setIncorrectDigits(Code x);

    // overloaded operator that compares responses and returns true if they are equal
    bool operator ==(const Response& other)const;

    // verloaded operator << that prints a response
    friend std::ostream& operator<<(ostream& out, const Response& y);

};

#endif
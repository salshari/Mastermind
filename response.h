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

        Response(){}
        
        Response(int correct, int incorrect);

        int getCorrectDigits() const ;

        int getIncorrectDigits() const;

        void setCorrectDigits(int correct);

        void setIncorrectDigits(int incorrect);

        bool operator ==(const Response& other)const;

        friend ostream& operator<<(ostream&out,Response&A);

    };

#endif
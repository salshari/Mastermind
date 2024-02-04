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

        Response();
        
        Response(int correct, int incorrect);

        int getCorrectDigits() const ;

        int getIncorrectDigits() const;

        void setCorrectDigits(Code x);

        void setIncorrectDigits(Code x);

        bool operator ==(const Response& other)const;

        friend std::ostream& operator<<(ostream& out, const Response& A);

    };

#endif
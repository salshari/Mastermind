#include "code.h"
#include "code.cpp"

#include <iostream>

using namespace std;

class Response
{
    private:
        int correctDigits;
        int incorrectDigits;
    public:
        Response(int correct, int incorrect);

        int getCorrectDigits() const ;

        int getIncorrectDigits() const;

        void setCorrectDigits(int correct);

        void setIncorrectDigits(int incorrect);

        bool operator ==(const Response& other)const;

        friend ostream& operator<<(ostream&out,Response&A);

    };

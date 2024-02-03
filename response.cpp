#include "response.h"

// default constructor
Response::Response(){}

Response::Response(int correct = 0, int incorrect = 0) : correctDigits(correct), incorrectDigits(incorrect){}

// full function definition for the getCorrectDigits function
Code Response::getCorrectDigits() const 
{
    return correctDigits;
}

// full function definition for the getIncorrectDigits function
Code Response::getIncorrectDigits() const
{
    return incorrectDigits;
}

// full function definition for the setCorrectDigits function
Code Response::setCorrectDigits(Code correct)
{
    correctDigits=correct;
}

// full function definition for the getIncorrectDigits function
Code Response::setIncorrectDigits(Code incorrect)
{
    incorrectDigits=incorrect;
}

// overloaded operator == which compares responses and returns true if they are equal
bool Response::operator == (const Response& other)const
{
    return (correctDigits==other.correctDigits) && (incorrectDigits == other.incorrectDigits);
}

// overloaded operator that prints a repsonse
ostream& Response::operator << (ostream&out,const Response&A) 
{
    out << "Correct Digits: " << A.correctDigits<< "Incorrect Digits: "<< A.incorrectDigits << endl;
}

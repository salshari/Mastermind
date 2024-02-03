#include "Response.h"

// default constructor
Response::Response(){}

Response::Response(int correct = 0, int incorrect = 0) : correctDigits(correct), incorrectDigits(incorrect){}

// full function definition for the getCorrectDigits function
int Response::getCorrectDigits() const 
{
    return correctDigits;
}

// full function definition for the getIncorrectDigits function
int Response::getIncorrectDigits() const
{
    return incorrectDigits;
}

// full function definition for the setCorrectDigits function
void Response::setCorrectDigits(int correct)
{
    correctDigits=correct;
}

// full function definition for the getIncorrectDigits function
void Response::setIncorrectDigits(int incorrect)
{
    incorrectDigits=incorrect;
}

// overloaded operator == which compares responses and returns true if they are equal
bool Response::operator == (const Response& other)const
{
    return (correctDigits==other.correctDigits) && (incorrectDigits == other.incorrectDigits);
}

// overloaded operator that prints a repsonse
std::ostream& operator<<(ostream&out,Response&A)
{
    out << "Correct Digits: " << A.correctDigits<< "Incorrect Digits: "<< A.incorrectDigits << endl;
}

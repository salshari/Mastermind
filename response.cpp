#include "code.h"
#include "code.cpp"

class Response
{
    private:
    int correctDigits;
    int incorrectDigits;
    
    public:

    // default constructor
    Response() {}

    Response(int correct=0, int incorrect=0) : correctDigits(correct), incorrectDigits(incorrect){}

    // full function definition for the getCorrectDigits function
    int getCorrectDigits() const 
    {
        return correctDigits;
    }

    // full function definition for the getIncorrectDigits function
    int getIncorrectDigits() const
    {
        return incorrectDigits;
    }

    // full function definition for the setCorrectDigits function
    void setCorrectDigits(int correct)
    {
        correctDigits = correct;
    }

    // full function definition for the getIncorrectDigits function
    void setIncorrectDigits(int incorrect)
    {
        incorrectDigits = incorrect;
    }

    // overloaded operator == which compares responses and returns true if they are equal
    bool operator == (const Response& other)const
    {
        return (correctDigits == other.correctDigits) && (incorrectDigits == other.incorrectDigits);
    }

    // overloaded operator that prints a repsonse
    friend ostream& operator<<(ostream&out, Response&A)
    {
        out << "Correct Digits: " << A.correctDigits<< "Incorrect Digits: "<< A.incorrectDigits << endl;
    }

};

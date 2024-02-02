#include "code.h"
#include "code.cpp"

class Response{
private:
    int correctDigits;
    int incorrectDigits;
public:
    Response(int correct=0, int incorrect=0) : correctDigits(correct), incorrectDigits(incorrect){}

    int getCorrectDigits() const {
        return correctDigits;
    }

    int getIncorrectDigits() const{
        return incorrectDigits;
    }

    void setCorrectDigits(int correct){
        correctDigits=correct;
    }

    void setIncorrectDigits(int incorrect){
        incorrectDigits=incorrect;
    }
    bool operator ==(const Response& other)const{
        return (correctDigits==other.correctDigits) && (incorrectDigits == other.incorrectDigits);
    }
    friend ostream& operator<<(ostream&out,Response&A){
        out << "Correct Digits: " << A.correctDigits<< "Incorrect Digits: "<< A.incorrectDigits << endl;
    }

};

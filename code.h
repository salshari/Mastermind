#include <iostream>
#include <vector>
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

    // constructor 
    Code();

    // function to initialize the code randomly
    void randomlyInitialize();

    /*
    function with guess as a parameter (another code object) that returns the 
    number of correct digits in the correct location 
    */
    int checkCorrect();

    /*
    function with guess as a parameter (another code object) that returns the 
    number of correct digits in the incorrect location.
    No digit in the guess or the code is counted more than once
    */
    int checkIncorrect();
};
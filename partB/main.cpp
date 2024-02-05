// include all necessary header and source files 
#include "mastermind.h"

#include <iostream>

using namespace std;

int main () 
{
    // seed time to random number generator
    srand(time(0));

    int n;
    int m;

    // take in n and m values from user
    cout << "Please give the length you want the code to be: ";
    cin >> n;
    cout << endl;
    cout << "Please give the range (just one integer as the code will have numbers from 0 - your given range): ";
    cin >> m;
    cout << endl;

    // make a mastermind object
    mastermind game(n,m);
    game.playGame();

}

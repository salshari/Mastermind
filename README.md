# Mastermind
A Mastermind game made using object-oriented design in C++ where the user plays against the computer.

GAME PLAY STEPS: 
1. The codebreaker is prompted to enter two integers: the code length n, 
   and the range of digits m.
2. The codemaker selects a code: a random sequence of n digits, each of 
   which is in the range [0,m-1].
3. The codebreaker is prompted to enter a guess, an n-digit sequence.
4. The codemaker responds by printing two values that indicate how close 
   the guess is to the code. The first response value is the number of digits that are the right digit in the right location. The second response value is the number of digits that are the right digit in the wrong location.
   ---For example if the code is 1, 2, 3, 4, 5 and the guess is 5, 0, 3, 2, 6, the response would be 1, 2 because one digit (3) is the right digit in the right location, and two digits (2 and 5) are the right digits in the wrong locations. 
   ---Note that no digit in the code or guess is counted more than once. If the code is 1, 2, 3, 4, 5 and the guess is 2, 1, 2, 2, 2, the response is 0, 2. If the code is 3, 2, 3, 3, 3 and the guess is 1, 3, 3, 4, 5, the response is 1, 1.
5. The codebreaker is prompted to continue entering guesses. The
   codebreaker wins if the correct code is guessed in ten or fewer guesses, and otherwise the codemaker wins.

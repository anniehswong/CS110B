// Assignment 3: Annie Wong
#include <iostream>
using namespace std;

/***** Function declaration (prototype) *****/
void playOneGame();
char getUserResponseToGuess(int);
int getMidpoint(int, int);
bool shouldPlayAgain();

/***** main function *****/
int main() {

        do {
          playOneGame();
        } while (shouldPlayAgain());

        return 0;
}

/***** Function definition (header and body) *****/

// The playOneGame() function has a return type of void. It implements a complete guessing game on the range of 1 to 100. getUserResponseToGuess(), and getMidpoint() should be called inside the playOneGame()

void playOneGame()
{
        int low = 1;
        int high = 100;

        cout << "Think of a number between 1 and 100." << endl;
        char response = getUserResponseToGuess(int guess);
        while (response != 'c'){
                if (response == 'l'){
                 response = response - 1;
                 getMidpoint(int low, int high)

                } else if (input == 'h'){

                }
        }
}

// This function prompts the user with the phrase “is it <guess>? (h/l/c): “ with the value replacing the token <guess> and returns a char. The char should be one of three possible values: ‘h’, ‘l’, or ‘c’.

char getUserResponseToGuess(int guess)
{
        char input;
        cout << "Is it " << guess << "? (h/l/c): ";
        cin >> input;
}

// This function accepts two integers, and returns the midpoint of the two integers.
int getMidpoint(int low, int high)
{
        int midpoint;
        midpoint = ((low + high)/2);
        return midpoint;
}

// The shouldPlayAgain() function has a bool return type. It prompts the user to determine if the user wants to play again, reads in a character, returns true if the character is a ‘y’, and otherwise returns false.

bool shouldPlayAgain()
{
        char again;
        bool status;
        cout << "Would you like to play again" << endl;
        cin >> again;
        if (again == 'y' || 'Y') {
                bool status = true;

        } else {
                bool staus = false;
        }
        return status;

}

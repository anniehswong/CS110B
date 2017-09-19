// Assignment 3: Annie Wong
#include <iostream>
using namespace std;

/***** Function declaration (prototype) *****/
void playOneGame();
char getUserResponseToGuess(int);
int getMidpoint(int, int);
bool shouldPlayAgain();

/***** main function *****/
int main()
{

        do
        {
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
        char response;

        cout << "Think of a number between 1 and 100." << endl;
        response = getUserResponseToGuess(getMidpoint(low, high));
        while (response != 'c')
        {
                if (response == 'l')
                {
                        // calculate midpoint
                        high = getMidpoint(low, high);
                }
                else if (response == 'h')
                {
                        // calculate midpoint
                        low  = getMidpoint(low, high);
                        if (high - 1 == low) {
                                low = high;
                        }
                }
                response = getUserResponseToGuess(getMidpoint(low, high));

        }

}

// This function prompts the user with the phrase “is it <guess>? (h/l/c): “ with the value replacing the token <guess> and returns a char. The char should be one of three possible values: ‘h’, ‘l’, or ‘c’.

char getUserResponseToGuess(int guess)
{
        char input;
        cout << "Is it " << guess << "? (h/l/c): ";
        cin >> input;
        return input;
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
        cout << "Great! Would you like to play again? (y/n): ";
        cin >> again;
        if (again == 'y') {
                status = true;

        } else {
                status = false;
        }
        return status;

}

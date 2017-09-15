// Assignment 3: Annie Wong

// Function declaration (prototype)
void playOneGame();
bool shouldPlayAgain();
char getUserResponseToGuess();
int getMidpoint(int, int);

// main function
int main()
{
  do
  {
    playOneGame();
  } while (shouldPlayAgain());

  return 0;
}

// Function definition (header and body)

// The playOneGame() function has a return type of void. It implements a complete guessing game on the range of 1 to 100.

// getUserResponseToGuess(), and getMidpoint() should be called inside the playOneGame()
void playOneGame()
{
  return 0;
}

// The shouldPlayAgain() function has a bool return type. It prompts the user to determine if the user wants to play again, reads in a character, returns true if the character is a ‘y’, and otherwise returns false.
bool shouldPlayAgain()
{

}

// This function prompts the user with the phrase “is it <guess>? (h/l/c): “  with the value replacing the token <guess> and returns a char. The char should be one of three possible values: ‘h’, ‘l’, or ‘c’.
char getUserResponseToGuess()
{

}

// This function accepts two integers, and returns the midpoint of the two integers.
int getMidpoint(int low, int high)
{

}

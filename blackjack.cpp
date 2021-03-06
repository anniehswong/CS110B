// Annie Wong
// CS110B Assignment 2: Blackjack

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
        int total=0, firstCard, secondCard, anotherRandomCard;
        char anotherCard = 'y', playAgain = 'y';

        do {
                // seed the random number generator
                srand(time(0));

                // generate a random number between 1 and 10 each time the player gets a card
                cout << "First cards: ";
                firstCard = 1+(rand()%10);
                secondCard = 1+(rand()%10);
                cout << firstCard << ", " << secondCard << endl;
                total = firstCard + secondCard;
                cout << "Total: " << total << endl;
                cout << "Do you want another card? (y/n): ";
                cin >> anotherCard;

                // user wants another card
                while (anotherCard == 'y')
                {
                        anotherRandomCard = 1+(rand()%10);
                        cout << "Card: " << anotherRandomCard << endl;
                        total += anotherRandomCard;
                        cout << "Total: " << total << endl;

                        // when total is greater than 21, output bust
                        if(total > 21)
                        {
                                cout << "Bust!" << endl;

                                // ask user if they would like to play again
                                cout << "Would you like to play again (y/n): ";
                                cin >> playAgain;
                                if (playAgain == 'y')
                                {
                                        anotherCard = 'n';
                                }
                                else
                                {
                                        break;
                                }
                        }

                        // when total is equal to 21, output blackjack
                        else if(total == 21)
                        {
                                cout << "Blackjack!" << endl;

                                // ask user if they would like to play again
                                cout << "Would you like to play again? (y/n): ";
                                cin >> playAgain;
                                if (playAgain == 'y')
                                {
                                        anotherCard = 'n';
                                }
                                else
                                {
                                        break;
                                }
                        }
                        else
                        {
                                cout << "Do you want another card? (y/n): ";
                                cin >> anotherCard;
                                if (anotherCard != 'y')
                                {
                                        cout << "Would you like to play again? (y/n): ";
                                        cin >> playAgain;
                                }
                        }

                }
        } while (playAgain == 'y');
        return 0;
}

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
                while (anotherCard == 'y')
                {
                        anotherRandomCard = 1+(rand()%10);
                        cout << "Card: " << anotherRandomCard << endl;
                        total += anotherRandomCard;
                        cout << "Total: " << total << endl;
                        if(total > 21)
                        {
                                cout << "Bust!" << endl;
                                cout << "Would you like to play again(y/n): ";
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
                        else if(total == 21)
                        {
                                cout << "Blackjack!" << endl;
                                cout << "Would you like to play again(y/n): ";
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
                        else {
                                cout << "Do you want another card? (y/n): ";
                                cin >> anotherCard;
                        }

                }
        } while (playAgain == 'y');
        return 0;
}

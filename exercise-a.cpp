#include <iostream>
using namespace std;

int main()
{
        int hometeamScore;
        int awayteamScore;
        char doAgain = 'y';

        do
        {
                cout << "Enter home team score: ";
                cin >> hometeamScore;
                cout << "Enter away team score: ";
                cin >> awayteamScore;

                cout << "Home team: " << hometeamScore << endl;
                cout << "Away team: " << awayteamScore << endl;

                if(hometeamScore > awayteamScore)
                {
                        cout << "Winner: Home Team!\n";
                }else if(hometeamScore < awayteamScore)
                {
                        cout << "Winner: Away Team!\n";
                }else
                {
                        cout << "It's an even game!\n";
                }

                cout << "Would you like to do it again?(enter y for yes and n for no)\n";
                cin >> doAgain;
        } while (doAgain == 'y' || doAgain == 'Y');

        return 0;
}

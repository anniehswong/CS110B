// Programming Exercise B
// Annie Wong, CS110B

#include <iostream>
using namespace std;

int main()
{
        const int LOW_SCORE = 3;
        string teamName1, teamName2;
        int score1, score2;

        // ask user to enter 1st baseball team and score
        cout << "Enter baseball team #1: ";
        cin >> teamName1;
        cout << "Enter score for team #1: ";
        cin >> score1;

        cout << endl;
        
        // ask user to enter 1st baseball team and score
        cout << "Enter baseball team #2: ";
        cin >> teamName2;
        cout << "Enter score for team #2: ";
        cin >> score2;

        cout << endl;
        cout << teamName1 <<": " << score1 << endl;
        cout << teamName2 <<": " << score2 << endl;

        if(score1 > score2)
        {
                cout << "The winning team is " << teamName1 << endl;
                if(score1 < LOW_SCORE)
                {
                  cout << teamName1 << " has a low score."<< endl;
                }
        }
        else if(score1 < score2)
        {
                cout << "The winning team is " << teamName2 << endl;
                if(score2 < LOW_SCORE)
                {
                  cout << teamName2 << " has a low score."<< endl;
                }
        }
        else
        {       cout << endl;
                cout << "It is a tie!" << endl;
        }
        return 0;
}

// Annie Wong
// This program tracks assignment grades

#include <iostream>
using namespace std;

int main()
{
        // declare variables
        int numAssignments, grade, total=0;

        // ask user for number of assignments
        cout << "Enter the number of assignments: ";
        cin >> numAssignments;

        // ask user for the grade of each assignment
        for(int i=0; i<numAssignments; i++)
        {
                cout << "Enter grade for assigment" << " " << i+1 <<": ";
                cin >> grade;

                // grade input validation
                if (grade < 0 || grade > 100) {
                        cout << "Re-enter grade(grade must be between 0-100): ";
                        cin >> grade;
                }
                total +=grade;
        }
        // Print total score from user input
        cout << "Total Score: " << total;

        cout << endl;

        double average;

        // Calculate average grade of total assigments
        average = total / numAssignments;

        // Print average score from user input
        cout << "Average Score: "<< average;
        cout << endl;

        if (average >= 90)
        {
                cout << "Your grade is A";
        } else if (average >=80)
        {
                cout << "Your grade is B";
        } else if (average >= 70)
        {
                cout << "Your grade is C";
        } else if (average >= 60)
                cout << "Your grade is D";
        else{
                cout << "I'll see you again next semester!";
        }

        cout << endl;
        return 0;
}

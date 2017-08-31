// Annie Wong
// This program tracks assignment grades

#include <iostream>
using namespace std;

int main()
{
        // declare variables
        int numAssignments, grade, total=0;
        double average;

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
        cout << "Total Score: " << total;

        cout << endl;

        // calculating average grade of total assigments
        average = total / numAssignments;
        cout << "Average Score: "<< average;
        cout << endl;
        return 0;
}

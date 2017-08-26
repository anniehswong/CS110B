// Assignment 1: Annie Wong
// This program prints out as many astericks as the user wants.

#include <iostream>
using namespace std;

int main()
{
  int count;
  char goAgain = 'y';
  while (goAgain != 'n')
  {
    cout << "How many astericks?: ";
    cin >> count;
    for(int i = 0; i < count; i++)
    {
      cout << "*";
    }
    cout << endl;
    cout << "Go again? (y/n): ";
    cin >> goAgain;
  }
  return 0;
}

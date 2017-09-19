#include <iostream>
using namespace std;

// Function Prototype
void alertShrimp (string [], int);

// Main Function
int main()
{
  int numBurritos;

    cout << "How many burritos are in the order? ";
    cin >> numBurritos;
    string burritoNames[numBurritos]; // creating burritoNames array

  for (int i = 0; i < numBurritos; i++)
  {
    cout << "What is burrito " << i+1 << ": ";
    cin >> burritoNames[i];
  }

  alertShrimp (burritoNames, numBurritos);
}

// Function Definition
void alertShrimp (string burritoNames[], int numBurritos)
{
  for (int i = 0; i < numBurritos; i++)
  {
    if (burritoNames[i] == "shrimp")
    {
      cout << "There is a shrimp order!" << endl;
    }
  }
}

// Annie Wong
// CS110B
// CH 3 - Programming Exercise A
// This program converts temperature between Celsius and Fahrenheit


#include <iostream>
#include <iomanip>
using namespace std;

// Function prototype
float toCelsius(float);

// Main function
int main()
{
  float fTemp = 60.0;
  for(int i=0; i<=20; i++)
  {
    float celsius;
    celsius = toCelsius(fTemp);
    cout << "Degree(C):" << " " << celsius;
    fTemp++;
    cout << endl;
  }

  return 0;
}

// Function header

// toCelsius() converts temperature from Fahrenheit to Celsius
float toCelsius(float fTemp){
  float cTemp;
  cTemp = (5.0/9.0 * (fTemp-32));
  return cTemp;
}

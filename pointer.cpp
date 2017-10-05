#include <iostream>
using namespace std;

int main()
{
    string names[] = {"Carnitas", "Pollo", "Veggies"};
    float prices[] = {6.95, 6.25, 5.95};

    string *namePtr = names; // declaring pointer
    float *pricesPtr = prices;

    for (int i = 0; i < 3; i++)
    {
        *(namePtr+i) += " especial";
        *(pricesPtr+i) += 1;
        cout << *(namePtr+i) << " " << *(pricesPtr+i) << endl;
    }


return 0;

}

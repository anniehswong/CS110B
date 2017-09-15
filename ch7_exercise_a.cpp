#include <iostream>
using namespace std;

int main()
{
    string burritoNames[4]={"carnitas", "beef", "shrimp", "vegetarian"};
    int numSold[4];

    for(int i = 0; i < 4; i++)
    {
        cout << "Number of " << burritoNames[i] <<": ";
        cin >> numSold[i];
    }

    cout << endl;

    // print out number of burittos sold per each type of burrito
    cout << "Daily Burrito Sales Report" << endl;
    cout << "--------------------------" << endl;
    for(int i = 0; i < 4; i++)
    {
        cout << burritoNames[i] << " " << numSold[i] << endl;
    }

    // print out total number of burritos sold
    int total = 0;
    for(int i = 0; i < 4; i++)
    {
        total += numSold[i];
    }

    cout << endl;
    cout << "Total Burritos Sold: " << total << endl;

    // print out the highest number of burrito type sold and the number sold
    int highestSale = numSold[0];
    int name;
    for(int i = 1; i < 4; i++)
    {
        if(numSold[i] > highestSale)
        {
        highestSale = numSold[i];
        name = i;
        }
    }
    cout << endl;
    cout << "Best Seller: " << burritoNames[name] << " " << "\nNumber Sold: " << highestSale << endl;
    cout << endl;
    return 0;
}

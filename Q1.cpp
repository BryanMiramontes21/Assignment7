#include <iostream>
using namespace std;

int main()
{
    int i, space, rowtotal = 4;
   
    for (i = 0; i <= rowtotal; i++) 
    {
        for (space = 1; space <= rowtotal - i; space++)
            cout << " ";
        for (space = 1; space <= 2 * i - 1; space++)
            cout << "+";
        cout << endl;

    }
    for (i = rowtotal - 1; i >= 1; i--)
    {
        for (space = 1; space <= rowtotal - i; space++)
            cout << " ";
        for (space = 1; space <= 2 * i - 1; space++)
            cout << "+";
        cout << endl;;
    }
}
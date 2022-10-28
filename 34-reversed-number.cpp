#include <iostream>

using namespace std;

int main()
{
    int input;
    cin >> input;

    if (input < 1000 || input > 9999)
    {
        cout << "Please enter a four-digit number." << endl;
    }
    else 
    {
        int ones = input % 10;
        input /= 10;
        int tens = input % 10;
        input /= 10;
        int hundreds = input % 10;
        input /= 10;
        int thousands = input % 10;

        cout << ones << tens << hundreds << thousands;
    }

    return 0;
}

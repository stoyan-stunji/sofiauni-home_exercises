#include <iostream>

using namespace std;

int main()
{
    int number = 0;
    cin >> number;
    
    int ones = number % 10;
    number = number / 10;
    int tens = number % 10;
    number = number / 10;
    int hundreds = number % 10;

    cout << ones << tens << hundreds << endl;
}


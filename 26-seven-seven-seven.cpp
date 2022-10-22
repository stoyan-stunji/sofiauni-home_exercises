#include <iostream>

using namespace std;

int main()
{
    cout << "Enter a three-digit number X: \n";
    int number = 0;
    cin >> number;

    int ones = number % 10;
    number = number / 10;
    int tens = number % 10;
    number = number / 10;
    int hundreds = number % 10;

    bool isSevenInOnes = ones == 7;
    bool isSevenInTens = tens == 7;
    bool isSevenInHundreds = hundreds == 7;

    int isSeven = int(isSevenInOnes) + 
        int(isSevenInTens) + int(isSevenInHundreds);

    cout << isSeven << endl;;

    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    cout << "Enter the first number: \n";
    int firstNumber;
    cin >> firstNumber;
    cout << "Enter the second number: \n";
    int secondNumber;
    cin >> secondNumber;
    cout << "Enter the third number: \n";
    int thirdNumber;
    cin >> thirdNumber;

    int max;
    max = firstNumber;
    if (firstNumber < secondNumber)
    {
        max = secondNumber;
        if (secondNumber < thirdNumber)
        {
            max = thirdNumber;
        }
    }
    else
    {
        max = firstNumber;
        if (firstNumber < thirdNumber)
        {
            max = thirdNumber;
        }
    }

    cout << "The max number is " << max << "." << endl;

    return 0;
}

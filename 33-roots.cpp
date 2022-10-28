#include <iostream>

using namespace std;

int main()
{
    int firstCoef; //a
    cin >> firstCoef;
    int secondCoef; //b
    cin >> secondCoef;
    int thirdCoef; //c
    cin >> thirdCoef;

    if (firstCoef == 0 || ((-pow(2, 30) >= firstCoef)
        || pow(2, 30) <= firstCoef || (-pow(2, 30) >= secondCoef)
        || pow(2, 30) <= secondCoef || (-pow(2, 30) >= thirdCoef)
        || pow(2, 30) <= thirdCoef))
    {
        cout << "Please enter correct values."
            << endl;
    }
    else
    {
        int discrimination = secondCoef *
            secondCoef - 4 * firstCoef * thirdCoef;

        if (discrimination > 0)
        {
            cout << "The are two real roots." << endl;
        }
        else if (discrimination == 0)
        {
            cout << "The is one real root." << endl;
        }
        else
        {
            cout << "The are no real roots." << endl;
        }
    }

    return 0;
}

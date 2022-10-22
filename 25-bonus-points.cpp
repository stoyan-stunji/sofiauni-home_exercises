#include <iostream>

using namespace std;

int main()
{
    cout << "Enter points: \n";
    int points = 0;
    cin >> points;

    double bonus = 0;
    
    if (points <= 100)
    {
        bonus += 5;
    }
    else if (points > 100 && points <= 1000)
    {
        bonus = points * 0.2;
    }
    else if (points > 1000)
    {
        bonus = points * 0.1;
    }

    if (points % 2 == 0)
    {
        bonus += 1;
    }

    double lastNumber = points % 10;

    if (lastNumber == 5)
    {
        bonus += 2;
    }

    cout << bonus << " " << points + bonus << endl;
       
    return 0;
}

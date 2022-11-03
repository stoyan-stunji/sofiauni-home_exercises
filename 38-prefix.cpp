#include <iostream>

using namespace std;

int main()
{
    int input = 0;
    cin >> input;
    int prefix = 0;
    cin >> prefix;

    int inputCopy = input;

    while (input > prefix)
    {
        input /= 10;
    }

    if (input == prefix)
    {
        cout << prefix << " IS a prefix of " << inputCopy << endl;
    }
    else
    {
        cout << prefix << " is NOT a prefix of " << inputCopy << endl;
    }

    return 0;
}

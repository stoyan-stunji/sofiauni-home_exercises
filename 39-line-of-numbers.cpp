#include <iostream>

using namespace std;

int main()
{
    int input = 0;
    cin >> input;

    while (input != 1)
    {
        cout << input << " ";
        
        if (input % 2 == 0)
        {
            input = input / 2;
        }
        else
        {
            input = (input * 3) + 1;
        }

    }

    return 0;
}

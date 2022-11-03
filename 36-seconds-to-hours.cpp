#include <iostream>

using namespace std;

int main()
{
    cout << "Enter seconds: \n";
    int input = 0;
    cin >> input;

    if (input > pow(10, 7))
    {
        cout << "Please enter valid values." << endl;
    }
    else
    {
        int days = input / (60 * 60 * 24);
        input %= (60 * 60 * 24);
        int hours = input / (60 * 60);
        input %= (60 * 60);
        int minutes = input / (60);
        input %= 60;
        int seconds = input;

        cout << days << " days " << hours << " hours " <<
            minutes << " minutes " << seconds << " seconds " << endl;
    }

    return 0;
}

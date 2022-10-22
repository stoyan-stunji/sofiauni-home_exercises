#include <iostream>

using namespace std;

int main()
{
    cout << "Enter a number: \n";
    int n = 0;
    cin >> n;
    
    for (int num = 1; num < n; num++)
    {
        if ((num % 3 == 0 || num % 5 == 0) || (num % 3 == 0 && num % 5 == 0))
        {
            cout << num << " ";
        }
    }

    return 0;
}


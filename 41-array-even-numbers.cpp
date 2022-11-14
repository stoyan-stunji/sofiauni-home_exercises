#include <iostream>

using namespace std;

const int ARRAY_MAX = 100;

int main()
{
    int n = 0;

    cout << "Number of array's elements: \n";
    cin >> n;
    int array[ARRAY_MAX];

    cout << "Array's elements: \n";

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    cout << "Even elements of array: \n";

    for (int i = 0; i < n; i++)
    {
        if (array[i] % 2 == 0)
        {
            cout << array[i] << " ";
        }
    }

    return 0;
}

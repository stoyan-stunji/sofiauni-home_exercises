#include <iostream>

using namespace std;

const int MAX_SIZE = 50;

void enterArray(int array[], int size)
{
    cout << "array ";
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
}

int sumDoubledOddElements(int array[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        if (array[i] % 2 == 0)
        {
            if ((array[i] / 2) % 2 != 0)
            {
                sum += array[i];
            }
        }
    }
    return sum;
}

int main()
{
    int array[MAX_SIZE];
    int size = 0;

    cout << "size ";
    cin >> size;

    enterArray(array, size);
    cout << sumDoubledOddElements(array, size);
}
